#include <hxcpp.h>

#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_af23706db05c7feb_18_new,"PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",18,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_37_create,"PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",37,0xb30d7781)
static const int _hx_array_data_46c2835d_4[] = {
	(int)-3130671,(int)-568494,(int)-163820,(int)-28636,(int)-16403680,(int)-9607690,
};
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_122_update,"PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",122,0xb30d7781)
static const int _hx_array_data_46c2835d_6[] = {
	(int)37,(int)65,
};
static const int _hx_array_data_46c2835d_7[] = {
	(int)39,(int)68,
};
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_199_hit,"PlayState","hit",0xf8bb0cc2,"PlayState.hit","PlayState.hx",199,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_217_ping,"PlayState","ping",0xb039cd23,"PlayState.ping","PlayState.hx",217,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_243_collectPowerUp,"PlayState","collectPowerUp",0x9006cf27,"PlayState.collectPowerUp","PlayState.hx",243,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_20_boot,"PlayState","boot",0xa6fd5ee3,"PlayState.boot","PlayState.hx",20,0xb30d7781)

void PlayState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_18_new)
HXLINE(  25)		this->_ballCount = 1;
HXLINE(  18)		super::__construct(MaxSize);
            	}

Dynamic PlayState_obj::__CreateEmpty() { return new PlayState_obj; }

void *PlayState_obj::_hx_vtable = 0;

Dynamic PlayState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlayState_obj > _hx_result = new PlayState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PlayState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x0a05f89d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0a05f89d;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void PlayState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_37_create)
HXLINE(  38)		::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE(  40)		this->_bat =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,180,220,null());
HXLINE(  41)		this->_bat->makeGraphic(40,6,-65281,null(),null());
HXLINE(  42)		this->_bat->set_immovable(true);
HXLINE(  44)		this->_ball =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,180,160,null());
HXLINE(  45)		this->_ball->makeGraphic(6,6,-65281,null(),null());
HXLINE(  47)		this->_ball->elasticity = ( (Float)(1) );
HXLINE(  48)		{
HXLINE(  48)			 ::flixel::math::FlxBasePoint this1 = this->_ball->maxVelocity;
HXDLIN(  48)			this1->set_x(( (Float)(200) ));
HXDLIN(  48)			this1->set_y(( (Float)(200) ));
            		}
HXLINE(  49)		this->_ball->velocity->set_y(( (Float)(200) ));
HXLINE(  51)		this->_walls =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  53)		this->_leftWall =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXLINE(  54)		this->_leftWall->makeGraphic(10,240,-8355712,null(),null());
HXLINE(  55)		this->_leftWall->set_immovable(true);
HXLINE(  56)		this->_walls->add(this->_leftWall).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  58)		this->_rightWall =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,310,0,null());
HXLINE(  59)		this->_rightWall->makeGraphic(10,240,-8355712,null(),null());
HXLINE(  60)		this->_rightWall->set_immovable(true);
HXLINE(  61)		this->_walls->add(this->_rightWall).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  63)		this->_topWall =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXLINE(  64)		this->_topWall->makeGraphic(320,10,-8355712,null(),null());
HXLINE(  65)		this->_topWall->set_immovable(true);
HXLINE(  66)		this->_walls->add(this->_topWall).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  68)		this->_bottomWall =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,239,null());
HXLINE(  69)		this->_bottomWall->makeGraphic(320,10,0,null(),null());
HXLINE(  70)		this->_bottomWall->set_immovable(true);
HXLINE(  71)		this->_walls->add(this->_bottomWall).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  74)		this->_bricks =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  77)		this->_powerup =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,180,160,null());
HXLINE(  78)		this->_powerup->makeGraphic(6,6,-65281,null(),null());
HXLINE(  79)		this->_powerup->set_immovable(true);
HXLINE(  81)		this->_powerup->velocity->set_y(( (Float)(200) ));
HXLINE(  83)		this->_powerups->add(this->_powerup).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  85)		int bx = 10;
HXLINE(  86)		int by = 30;
HXLINE(  88)		::Array< int > brickColours = ::Array_obj< int >::fromData( _hx_array_data_46c2835d_4,6);
HXLINE(  90)		{
HXLINE(  90)			int _g = 0;
HXDLIN(  90)			while((_g < 6)){
HXLINE(  90)				_g = (_g + 1);
HXDLIN(  90)				int y = (_g - 1);
HXLINE(  92)				{
HXLINE(  92)					int _g1 = 0;
HXDLIN(  92)					while((_g1 < 20)){
HXLINE(  92)						_g1 = (_g1 + 1);
HXDLIN(  92)						int x = (_g1 - 1);
HXLINE(  94)						 ::flixel::FlxSprite tempBrick =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,bx,by,null());
HXLINE(  95)						tempBrick->makeGraphic(15,15,brickColours->__get(y),null(),null());
HXLINE(  96)						tempBrick->set_immovable(true);
HXLINE(  98)						bool _hx_tmp;
HXDLIN(  98)						if ((tempBrick->y != 6)) {
HXLINE(  98)							_hx_tmp = (tempBrick->y == 5);
            						}
            						else {
HXLINE(  98)							_hx_tmp = true;
            						}
HXDLIN(  98)						if (_hx_tmp) {
HXLINE( 100)							tempBrick->health = ( (Float)(2) );
            						}
            						else {
HXLINE( 104)							tempBrick->health = ( (Float)(1) );
            						}
HXLINE( 106)						this->_bricks->add(tempBrick).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 107)						bx = (bx + 15);
            					}
            				}
HXLINE( 110)				bx = 10;
HXLINE( 111)				by = (by + 15);
            			}
            		}
HXLINE( 114)		this->add(this->_walls);
HXLINE( 115)		this->add(this->_bat);
HXLINE( 116)		this->add(this->_ball);
HXLINE( 117)		this->add(this->_bricks);
HXLINE( 118)		this->add(this->_powerups);
            	}


void PlayState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_122_update)
HXLINE( 123)		this->super::update(elapsed);
HXLINE( 125)		this->_bat->velocity->set_x(( (Float)(0) ));
HXLINE( 150)		bool _hx_tmp;
HXDLIN( 150)		if (::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_46c2835d_6,2),1)) {
HXLINE( 150)			_hx_tmp = (this->_bat->x > 10);
            		}
            		else {
HXLINE( 150)			_hx_tmp = false;
            		}
HXDLIN( 150)		if (_hx_tmp) {
HXLINE( 152)			this->_bat->velocity->set_x(( (Float)(-350) ));
            		}
            		else {
HXLINE( 154)			bool _hx_tmp;
HXDLIN( 154)			if (::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_46c2835d_7,2),1)) {
HXLINE( 154)				_hx_tmp = (this->_bat->x < 270);
            			}
            			else {
HXLINE( 154)				_hx_tmp = false;
            			}
HXDLIN( 154)			if (_hx_tmp) {
HXLINE( 156)				this->_bat->velocity->set_x(( (Float)(350) ));
            			}
            		}
HXLINE( 159)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justReleased) );
HXDLIN( 159)		if (_this->keyManager->checkStatusUnsafe(82,_this->status)) {
HXLINE( 161)			 ::flixel::FlxState nextState = ( ( ::flixel::FlxState)(::Type_obj::createInstance(::Type_obj::getClass(::flixel::FlxG_obj::game->_state),::cpp::VirtualArray_obj::__new(0))) );
HXDLIN( 161)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 161)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
HXLINE( 164)		if ((this->_bat->x < 10)) {
HXLINE( 166)			this->_bat->set_x(( (Float)(10) ));
            		}
HXLINE( 169)		if ((this->_bat->x > 270)) {
HXLINE( 171)			this->_bat->set_x(( (Float)(270) ));
            		}
HXLINE( 175)		if ((this->_ball->y > 240)) {
HXLINE( 178)			 ::PlayState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 178)			_hx_tmp->_ballCount = (_hx_tmp->_ballCount - 1);
            		}
HXLINE( 186)		if ((this->_ballCount <= 0)) {
HXLINE( 188)			 ::flixel::FlxState nextState = ( ( ::flixel::FlxState)(::Type_obj::createInstance(::Type_obj::getClass(::flixel::FlxG_obj::game->_state),::cpp::VirtualArray_obj::__new(0))) );
HXDLIN( 188)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 188)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
HXLINE( 192)		::flixel::FlxG_obj::overlap(( ( ::flixel::FlxBasic)(this->_bat) ),( ( ::flixel::FlxBasic)(this->_powerup) ),this->collectPowerUp_dyn(),::flixel::FlxObject_obj::separate_dyn());
HXLINE( 193)		{
HXLINE( 193)			 ::Dynamic NotifyCallback = null();
HXDLIN( 193)			::flixel::FlxG_obj::overlap(( ( ::flixel::FlxBasic)(this->_ball) ),( ( ::flixel::FlxBasic)(this->_walls) ),NotifyCallback,::flixel::FlxObject_obj::separate_dyn());
            		}
HXLINE( 194)		::flixel::FlxG_obj::overlap(( ( ::flixel::FlxBasic)(this->_bat) ),( ( ::flixel::FlxBasic)(this->_ball) ),this->ping_dyn(),::flixel::FlxObject_obj::separate_dyn());
HXLINE( 195)		::flixel::FlxG_obj::overlap(( ( ::flixel::FlxBasic)(this->_ball) ),( ( ::flixel::FlxBasic)(this->_bricks) ),this->hit_dyn(),::flixel::FlxObject_obj::separate_dyn());
            	}


void PlayState_obj::hit( ::flixel::FlxObject Ball, ::flixel::FlxObject Brick){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_199_hit)
HXLINE( 200)		 ::flixel::FlxObject Brick1 = Brick;
HXDLIN( 200)		Brick1->health = (Brick1->health - ( (Float)(1) ));
HXLINE( 201)		if ((Brick->health <= 0)) {
HXLINE( 203)			Brick->set_exists(false);
HXLINE( 206)			 ::flixel::math::FlxRandom rand =  ::flixel::math::FlxRandom_obj::__alloc( HX_CTX ,null());
HXLINE( 207)			if ((rand->_hx_float(0,100,null()) < ((Float)0.1))) {
HXLINE( 209)				this->_powerup->set_x(Brick->x);
HXLINE( 210)				this->_powerup->set_y(Brick->y);
HXLINE( 211)				this->_powerup->set_exists(true);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,hit,(void))

void PlayState_obj::ping( ::flixel::FlxObject Bat, ::flixel::FlxObject Ball){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_217_ping)
HXLINE( 218)		int batmid = (::Std_obj::_hx_int(Bat->x) + 20);
HXLINE( 219)		int ballmid = (::Std_obj::_hx_int(Ball->x) + 3);
HXLINE( 220)		int diff;
HXLINE( 222)		if ((ballmid < batmid)) {
HXLINE( 225)			diff = (batmid - ballmid);
HXLINE( 226)			Ball->velocity->set_x(( (Float)((-10 * diff)) ));
            		}
            		else {
HXLINE( 228)			if ((ballmid > batmid)) {
HXLINE( 231)				diff = (ballmid - batmid);
HXLINE( 232)				Ball->velocity->set_x(( (Float)((10 * diff)) ));
            			}
            			else {
HXLINE( 238)				 ::flixel::math::FlxBasePoint this1 = Ball->velocity;
HXDLIN( 238)				this1->set_x(( (Float)((2 + ::flixel::FlxG_obj::random->_hx_int(0,8,null()))) ));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,ping,(void))

void PlayState_obj::collectPowerUp( ::flixel::FlxObject Bat, ::flixel::FlxObject PowerUp){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_243_collectPowerUp)
HXLINE( 244)		PowerUp->set_exists(false);
HXLINE( 248)		 ::flixel::math::FlxRandom rand =  ::flixel::math::FlxRandom_obj::__alloc( HX_CTX ,null());
HXLINE( 249)		if ((rand->_hx_float(0,100,null()) < ((Float)0.5))) {
HXLINE( 252)			 ::flixel::FlxSprite ball1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,this->_ball->x,this->_ball->y,null());
HXLINE( 253)			ball1->makeGraphic(6,6,-1,null(),null());
HXLINE( 254)			ball1->velocity->set_y(( (Float)(200) ));
HXLINE( 255)			ball1->velocity->set_x(( (Float)(100) ));
HXLINE( 256)			ball1->elasticity = ( (Float)(1) );
HXLINE( 257)			{
HXLINE( 257)				 ::flixel::math::FlxBasePoint this1 = ball1->maxVelocity;
HXDLIN( 257)				this1->set_x(( (Float)(200) ));
HXDLIN( 257)				this1->set_y(( (Float)(200) ));
            			}
HXLINE( 258)			this->add(ball1);
HXLINE( 260)			 ::flixel::FlxSprite ball2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,this->_ball->x,this->_ball->y,null());
HXLINE( 261)			ball2->makeGraphic(6,6,-1,null(),null());
HXLINE( 262)			ball2->velocity->set_y(( (Float)(200) ));
HXLINE( 263)			ball2->velocity->set_x(( (Float)(-100) ));
HXLINE( 264)			ball2->elasticity = ( (Float)(1) );
HXLINE( 265)			{
HXLINE( 265)				 ::flixel::math::FlxBasePoint this2 = ball2->maxVelocity;
HXDLIN( 265)				this2->set_x(( (Float)(200) ));
HXDLIN( 265)				this2->set_y(( (Float)(200) ));
            			}
HXLINE( 266)			this->add(ball2);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,collectPowerUp,(void))

int PlayState_obj::BAT_SPEED;


::hx::ObjectPtr< PlayState_obj > PlayState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< PlayState_obj > __this = new PlayState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< PlayState_obj > PlayState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	PlayState_obj *__this = (PlayState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlayState_obj), true, "PlayState"));
	*(void **)__this = PlayState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(_bat,"_bat");
	HX_MARK_MEMBER_NAME(_ball,"_ball");
	HX_MARK_MEMBER_NAME(_powerup,"_powerup");
	HX_MARK_MEMBER_NAME(_ballCount,"_ballCount");
	HX_MARK_MEMBER_NAME(_walls,"_walls");
	HX_MARK_MEMBER_NAME(_leftWall,"_leftWall");
	HX_MARK_MEMBER_NAME(_rightWall,"_rightWall");
	HX_MARK_MEMBER_NAME(_topWall,"_topWall");
	HX_MARK_MEMBER_NAME(_bottomWall,"_bottomWall");
	HX_MARK_MEMBER_NAME(_bricks,"_bricks");
	HX_MARK_MEMBER_NAME(_powerups,"_powerups");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_bat,"_bat");
	HX_VISIT_MEMBER_NAME(_ball,"_ball");
	HX_VISIT_MEMBER_NAME(_powerup,"_powerup");
	HX_VISIT_MEMBER_NAME(_ballCount,"_ballCount");
	HX_VISIT_MEMBER_NAME(_walls,"_walls");
	HX_VISIT_MEMBER_NAME(_leftWall,"_leftWall");
	HX_VISIT_MEMBER_NAME(_rightWall,"_rightWall");
	HX_VISIT_MEMBER_NAME(_topWall,"_topWall");
	HX_VISIT_MEMBER_NAME(_bottomWall,"_bottomWall");
	HX_VISIT_MEMBER_NAME(_bricks,"_bricks");
	HX_VISIT_MEMBER_NAME(_powerups,"_powerups");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PlayState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hit") ) { return ::hx::Val( hit_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_bat") ) { return ::hx::Val( _bat ); }
		if (HX_FIELD_EQ(inName,"ping") ) { return ::hx::Val( ping_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_ball") ) { return ::hx::Val( _ball ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_walls") ) { return ::hx::Val( _walls ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_bricks") ) { return ::hx::Val( _bricks ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_powerup") ) { return ::hx::Val( _powerup ); }
		if (HX_FIELD_EQ(inName,"_topWall") ) { return ::hx::Val( _topWall ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_leftWall") ) { return ::hx::Val( _leftWall ); }
		if (HX_FIELD_EQ(inName,"_powerups") ) { return ::hx::Val( _powerups ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_ballCount") ) { return ::hx::Val( _ballCount ); }
		if (HX_FIELD_EQ(inName,"_rightWall") ) { return ::hx::Val( _rightWall ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bottomWall") ) { return ::hx::Val( _bottomWall ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"collectPowerUp") ) { return ::hx::Val( collectPowerUp_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PlayState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_bat") ) { _bat=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_ball") ) { _ball=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_walls") ) { _walls=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_bricks") ) { _bricks=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_powerup") ) { _powerup=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_topWall") ) { _topWall=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_leftWall") ) { _leftWall=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_powerups") ) { _powerups=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_ballCount") ) { _ballCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rightWall") ) { _rightWall=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bottomWall") ) { _bottomWall=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_bat",d6,f6,15,3f));
	outFields->push(HX_("_ball",de,fd,21,f4));
	outFields->push(HX_("_powerup",21,d7,81,94));
	outFields->push(HX_("_ballCount",11,b2,53,5f));
	outFields->push(HX_("_walls",6a,53,06,c1));
	outFields->push(HX_("_leftWall",10,98,83,9d));
	outFields->push(HX_("_rightWall",c7,2e,5b,15));
	outFields->push(HX_("_topWall",c0,b7,bb,29));
	outFields->push(HX_("_bottomWall",b4,8e,63,06));
	outFields->push(HX_("_bricks",71,73,d1,86));
	outFields->push(HX_("_powerups",32,66,1a,5d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PlayState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PlayState_obj,_bat),HX_("_bat",d6,f6,15,3f)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PlayState_obj,_ball),HX_("_ball",de,fd,21,f4)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PlayState_obj,_powerup),HX_("_powerup",21,d7,81,94)},
	{::hx::fsInt,(int)offsetof(PlayState_obj,_ballCount),HX_("_ballCount",11,b2,53,5f)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PlayState_obj,_walls),HX_("_walls",6a,53,06,c1)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PlayState_obj,_leftWall),HX_("_leftWall",10,98,83,9d)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PlayState_obj,_rightWall),HX_("_rightWall",c7,2e,5b,15)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PlayState_obj,_topWall),HX_("_topWall",c0,b7,bb,29)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(PlayState_obj,_bottomWall),HX_("_bottomWall",b4,8e,63,06)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PlayState_obj,_bricks),HX_("_bricks",71,73,d1,86)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PlayState_obj,_powerups),HX_("_powerups",32,66,1a,5d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo PlayState_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &PlayState_obj::BAT_SPEED,HX_("BAT_SPEED",1d,1a,56,88)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String PlayState_obj_sMemberFields[] = {
	HX_("_bat",d6,f6,15,3f),
	HX_("_ball",de,fd,21,f4),
	HX_("_powerup",21,d7,81,94),
	HX_("_ballCount",11,b2,53,5f),
	HX_("_walls",6a,53,06,c1),
	HX_("_leftWall",10,98,83,9d),
	HX_("_rightWall",c7,2e,5b,15),
	HX_("_topWall",c0,b7,bb,29),
	HX_("_bottomWall",b4,8e,63,06),
	HX_("_bricks",71,73,d1,86),
	HX_("_powerups",32,66,1a,5d),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("hit",53,46,4f,00),
	HX_("ping",72,f2,57,4a),
	HX_("collectPowerUp",36,4d,c8,25),
	::String(null()) };

static void PlayState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::BAT_SPEED,"BAT_SPEED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PlayState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::BAT_SPEED,"BAT_SPEED");
};

#endif

::hx::Class PlayState_obj::__mClass;

static ::String PlayState_obj_sStaticFields[] = {
	HX_("BAT_SPEED",1d,1a,56,88),
	::String(null())
};

void PlayState_obj::__register()
{
	PlayState_obj _hx_dummy;
	PlayState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PlayState",5d,83,c2,46);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = PlayState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PlayState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlayState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlayState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PlayState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlayState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlayState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PlayState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_20_boot)
HXDLIN(  20)		BAT_SPEED = 350;
            	}
}

