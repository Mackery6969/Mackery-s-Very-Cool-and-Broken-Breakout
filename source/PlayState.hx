package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.math.FlxRandom;
import flixel.util.FlxColor;
import flixel.util.FlxSpriteUtil;

/**
 * Atari 2600 Breakout
 *
 * @author Davey, Photon Storm
 * @link http://www.photonstorm.com/archives/1290/video-of-me-coding-breakout-in-flixel-in-20-mins
 */
class PlayState extends FlxState
{
	static inline var BAT_SPEED:Int = 350;

	var _bat:FlxSprite;
	var _ball:FlxSprite;
	var _powerup:FlxSprite;
	var _ballCount:Int = 1;

	var _walls:FlxGroup;
	var _leftWall:FlxSprite;
	var _rightWall:FlxSprite;
	var _topWall:FlxSprite;
	var _bottomWall:FlxSprite;

	var _bricks:FlxGroup;
	var _powerups:FlxGroup;

	override public function create():Void
	{
		FlxG.mouse.visible = false;

		_bat = new FlxSprite(180, 220);
		_bat.makeGraphic(40, 6, FlxColor.MAGENTA);
		_bat.immovable = true;

		_ball = new FlxSprite(180, 160);
		_ball.makeGraphic(6, 6, FlxColor.MAGENTA);

		_ball.elasticity = 1;
		_ball.maxVelocity.set(200, 200);
		_ball.velocity.y = 200;

		_walls = new FlxGroup();

		_leftWall = new FlxSprite(0, 0);
		_leftWall.makeGraphic(10, 240, FlxColor.GRAY);
		_leftWall.immovable = true;
		_walls.add(_leftWall);

		_rightWall = new FlxSprite(310, 0);
		_rightWall.makeGraphic(10, 240, FlxColor.GRAY);
		_rightWall.immovable = true;
		_walls.add(_rightWall);

		_topWall = new FlxSprite(0, 0);
		_topWall.makeGraphic(320, 10, FlxColor.GRAY);
		_topWall.immovable = true;
		_walls.add(_topWall);

		_bottomWall = new FlxSprite(0, 239);
		_bottomWall.makeGraphic(320, 10, FlxColor.TRANSPARENT);
		_bottomWall.immovable = true;
		_walls.add(_bottomWall);

		// Some bricks
		_bricks = new FlxGroup();

		// create a powerup that the bat can hit to gain an ability
		_powerup = new FlxSprite(180, 160);
		_powerup.makeGraphic(6, 6, FlxColor.MAGENTA);
		_powerup.immovable = true;
		// make the powerup fall
		_powerup.velocity.y = 200;
		// add the powerup to the group
		_powerups.add(_powerup);

		var bx:Int = 10;
		var by:Int = 30;

		var brickColours:Array<Int> = [0xffd03ad1, 0xfff75352, 0xfffd8014, 0xffff9024, 0xff05b320, 0xff6d65f6];

		for (y in 0...6)
		{
			for (x in 0...20)
			{
				var tempBrick:FlxSprite = new FlxSprite(bx, by);
				tempBrick.makeGraphic(15, 15, brickColours[y]);
				tempBrick.immovable = true;

				if (tempBrick.y == 6 || tempBrick.y == 5)
				{
					tempBrick.health = 2;
				}
				else
				{
					tempBrick.health = 1;
				}
				_bricks.add(tempBrick);
				bx += 15;
			}

			bx = 10;
			by += 15;
		}

		add(_walls);
		add(_bat);
		add(_ball);
		add(_bricks);
		add(_powerups);
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);

		_bat.velocity.x = 0;

		#if FLX_TOUCH
		// Simple routine to move bat to x position of touch
		for (touch in FlxG.touches.list)
		{
			if (touch.pressed)
			{
				if (touch.x > 10 && touch.x < 270)
					_bat.x = touch.x;
			}
		}
		// Vertical long swipe up or down resets game state
		for (swipe in FlxG.swipes)
		{
			if (swipe.distance > 100)
			{
				if ((swipe.angle < 10 && swipe.angle > -10) || (swipe.angle > 170 || swipe.angle < -170))
				{
					FlxG.resetState();
				}
			}
		}
		#end

		if (FlxG.keys.anyPressed([LEFT, A]) && _bat.x > 10)
		{
			_bat.velocity.x = -BAT_SPEED;
		}
		else if (FlxG.keys.anyPressed([RIGHT, D]) && _bat.x < 270)
		{
			_bat.velocity.x = BAT_SPEED;
		}

		if (FlxG.keys.justReleased.R)
		{
			FlxG.resetState();
		}

		if (_bat.x < 10)
		{
			_bat.x = 10;
		}

		if (_bat.x > 270)
		{
			_bat.x = 270;
		}

		// if the ball hits the bottom, game over
		if (_ball.y > 240)
		{
			#if !debug
			_ballCount -= 1;
			#else
			if (_ballCount != 1)
				ballCount -= 1;
			#end
		}

		// if there is no more balls its game over
		if (_ballCount <= 0)
		{
			FlxG.resetState();
		}

		// if the bat hits a powerup it will activate a powerup
		FlxG.collide(_bat, _powerup, collectPowerUp);
		FlxG.collide(_ball, _walls);
		FlxG.collide(_bat, _ball, ping);
		FlxG.collide(_ball, _bricks, hit);
	}

	function hit(Ball:FlxObject, Brick:FlxObject):Void
	{
		Brick.health -= 1;
		if (Brick.health <= 0)
		{
			Brick.exists = false;

			// 0.1 chance for a brick to drop a powerup
			var rand:FlxRandom = new FlxRandom();
			if (rand.bool(0.1))
			{
				_powerup.x = Brick.x;
				_powerup.y = Brick.y;
				_powerup.exists = true;
			}
		}
	}

	function ping(Bat:FlxObject, Ball:FlxObject):Void
	{
		var batmid:Int = Std.int(Bat.x) + 20;
		var ballmid:Int = Std.int(Ball.x) + 3;
		var diff:Int;

		if (ballmid < batmid)
		{
			// Ball is on the left of the bat
			diff = batmid - ballmid;
			Ball.velocity.x = (-10 * diff);
		}
		else if (ballmid > batmid)
		{
			// Ball on the right of the bat
			diff = ballmid - batmid;
			Ball.velocity.x = (10 * diff);
		}
		else
		{
			// Ball is perfectly in the middle
			// A little random X to stop it bouncing up!
			Ball.velocity.x = 2 + FlxG.random.int(0, 8);
		}
	}

	function collectPowerUp(Bat:FlxObject, PowerUp:FlxObject):Void
	{
		PowerUp.exists = false;

		// either make 2 balls or make the ball bigger

		var rand:FlxRandom = new FlxRandom();
		if (rand.bool(0.5))
		{
			// make 2 balls
			var ball1:FlxSprite = new FlxSprite(_ball.x, _ball.y);
			ball1.makeGraphic(6, 6, FlxColor.WHITE);
			ball1.velocity.y = 200;
			ball1.velocity.x = 100;
			ball1.elasticity = 1;
			ball1.maxVelocity.set(200, 200);
			add(ball1);

			var ball2:FlxSprite = new FlxSprite(_ball.x, _ball.y);
			ball2.makeGraphic(6, 6, FlxColor.WHITE);
			ball2.velocity.y = 200;
			ball2.velocity.x = -100;
			ball2.elasticity = 1;
			ball2.maxVelocity.set(200, 200);
			add(ball2);
		}
		/*
			else
			{
				// make the ball bigger
				//Ball.scale.x + 10;
				//Ball.scale.y + 10;
			}
		 */
	}
}
