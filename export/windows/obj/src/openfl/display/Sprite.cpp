#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Timeline
#include <openfl/display/Timeline.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_utils_AssetLibrary
#include <openfl/utils/AssetLibrary.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_154_new,"openfl.display.Sprite","new",0x3ff0c061,"openfl.display.Sprite.new","openfl/display/Sprite.hx",154,0xd5438ced)
HX_LOCAL_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_212_startDrag,"openfl.display.Sprite","startDrag",0x20ea0c37,"openfl.display.Sprite.startDrag","openfl/display/Sprite.hx",212,0xd5438ced)
HX_LOCAL_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_253_stopDrag,"openfl.display.Sprite","stopDrag",0x4d02dd75,"openfl.display.Sprite.stopDrag","openfl/display/Sprite.hx",253,0xd5438ced)
HX_LOCAL_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_274___bind,"openfl.display.Sprite","__bind",0xfdd19f7c,"openfl.display.Sprite.__bind","openfl/display/Sprite.hx",274,0xd5438ced)
HX_LOCAL_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_287___getCursor,"openfl.display.Sprite","__getCursor",0x4a69b9ed,"openfl.display.Sprite.__getCursor","openfl/display/Sprite.hx",287,0xd5438ced)
HX_LOCAL_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_292___hitTest,"openfl.display.Sprite","__hitTest",0x895417e6,"openfl.display.Sprite.__hitTest","openfl/display/Sprite.hx",292,0xd5438ced)
HX_LOCAL_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_331___hitTestHitArea,"openfl.display.Sprite","__hitTestHitArea",0x980a9c3a,"openfl.display.Sprite.__hitTestHitArea","openfl/display/Sprite.hx",331,0xd5438ced)
HX_LOCAL_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_353___hitTestMask,"openfl.display.Sprite","__hitTestMask",0x9c046ff2,"openfl.display.Sprite.__hitTestMask","openfl/display/Sprite.hx",353,0xd5438ced)
HX_LOCAL_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_368_get_graphics,"openfl.display.Sprite","get_graphics",0x451134b3,"openfl.display.Sprite.get_graphics","openfl/display/Sprite.hx",368,0xd5438ced)
HX_LOCAL_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_379_get_tabEnabled,"openfl.display.Sprite","get_tabEnabled",0x5c66fc94,"openfl.display.Sprite.get_tabEnabled","openfl/display/Sprite.hx",379,0xd5438ced)
HX_LOCAL_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_384_get_buttonMode,"openfl.display.Sprite","get_buttonMode",0xceb5485d,"openfl.display.Sprite.get_buttonMode","openfl/display/Sprite.hx",384,0xd5438ced)
HX_LOCAL_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_389_set_buttonMode,"openfl.display.Sprite","set_buttonMode",0xeed530d1,"openfl.display.Sprite.set_buttonMode","openfl/display/Sprite.hx",389,0xd5438ced)
HX_LOCAL_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_184_fromTimeline,"openfl.display.Sprite","fromTimeline",0x1ae1d1ea,"openfl.display.Sprite.fromTimeline","openfl/display/Sprite.hx",184,0xd5438ced)
namespace openfl{
namespace display{

void Sprite_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_154_new)
HXLINE( 155)		super::__construct();
HXLINE( 157)		this->_hx___drawableType = 4;
HXLINE( 158)		this->_hx___buttonMode = false;
HXLINE( 159)		this->useHandCursor = true;
HXLINE( 161)		if (::hx::IsNotNull( this->_hx___pendingBindLibrary )) {
HXLINE( 163)			 ::openfl::utils::AssetLibrary library = this->_hx___pendingBindLibrary;
HXLINE( 164)			::String className = this->_hx___pendingBindClassName;
HXLINE( 165)			this->_hx___pendingBindLibrary = null();
HXLINE( 166)			this->_hx___pendingBindClassName = null();
HXLINE( 167)			library->bind(className,::hx::ObjectPtr<OBJ_>(this));
            		}
            		else {
HXLINE( 169)			if (::hx::IsNotNull( ::openfl::display::Sprite_obj::_hx___constructor )) {
HXLINE( 171)				 ::Dynamic method = ::openfl::display::Sprite_obj::_hx___constructor;
HXLINE( 172)				::openfl::display::Sprite_obj::_hx___constructor = null();
HXLINE( 173)				method(::hx::ObjectPtr<OBJ_>(this));
            			}
            		}
            	}

Dynamic Sprite_obj::__CreateEmpty() { return new Sprite_obj; }

void *Sprite_obj::_hx_vtable = 0;

Dynamic Sprite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Sprite_obj > _hx_result = new Sprite_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Sprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417;
		}
	} else {
		return inClassId==(int)0x4af7dd8e || inClassId==(int)0x6b353933;
	}
}

void Sprite_obj::startDrag(::hx::Null< bool >  __o_lockCenter, ::openfl::geom::Rectangle bounds){
            		bool lockCenter = __o_lockCenter.Default(false);
            	HX_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_212_startDrag)
HXDLIN( 212)		if (::hx::IsNotNull( this->stage )) {
HXLINE( 214)			this->stage->_hx___startDrag(::hx::ObjectPtr<OBJ_>(this),lockCenter,bounds);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Sprite_obj,startDrag,(void))

void Sprite_obj::stopDrag(){
            	HX_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_253_stopDrag)
HXDLIN( 253)		if (::hx::IsNotNull( this->stage )) {
HXLINE( 255)			this->stage->_hx___stopDrag(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,stopDrag,(void))

void Sprite_obj::_hx___bind( ::openfl::utils::AssetLibrary library,::String className){
            	HX_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_274___bind)
HXDLIN( 274)		if (::hx::IsNull( this->_hx___worldTransform )) {
HXLINE( 276)			this->_hx___pendingBindLibrary = library;
HXLINE( 277)			this->_hx___pendingBindClassName = className;
            		}
            		else {
HXLINE( 279)			bool _hx_tmp;
HXDLIN( 279)			bool _hx_tmp1;
HXDLIN( 279)			if (::hx::IsNotNull( library )) {
HXLINE( 279)				_hx_tmp1 = ::hx::IsNull( className );
            			}
            			else {
HXLINE( 279)				_hx_tmp1 = true;
            			}
HXDLIN( 279)			if (!(_hx_tmp1)) {
HXLINE( 279)				_hx_tmp = !(library->bind(className,::hx::ObjectPtr<OBJ_>(this)));
            			}
            			else {
HXLINE( 279)				_hx_tmp = true;
            			}
HXDLIN( 279)			if (_hx_tmp) {
HXLINE( 281)				::lime::utils::Log_obj::error(((HX_("Cannot bind class name \"",fb,99,d6,5b) + className) + HX_("\"",22,00,00,00)),::hx::SourceInfo(HX_("openfl/display/Sprite.hx",ed,8c,43,d5),281,HX_("openfl.display.Sprite",ef,fb,d6,4d),HX_("__bind",dd,58,0f,f0)));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Sprite_obj,_hx___bind,(void))

::String Sprite_obj::_hx___getCursor(){
            	HX_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_287___getCursor)
HXDLIN( 287)		bool _hx_tmp;
HXDLIN( 287)		if (this->_hx___buttonMode) {
HXDLIN( 287)			_hx_tmp = this->useHandCursor;
            		}
            		else {
HXDLIN( 287)			_hx_tmp = false;
            		}
HXDLIN( 287)		if (_hx_tmp) {
HXDLIN( 287)			return HX_("button",f2,61,e0,d9);
            		}
            		else {
HXDLIN( 287)			return null();
            		}
HXDLIN( 287)		return null();
            	}


bool Sprite_obj::_hx___hitTest(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject){
            	HX_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_292___hitTest)
HXLINE( 293)		bool _hx_tmp;
HXDLIN( 293)		bool _hx_tmp1;
HXDLIN( 293)		if (interactiveOnly) {
HXLINE( 293)			_hx_tmp1 = !(this->mouseEnabled);
            		}
            		else {
HXLINE( 293)			_hx_tmp1 = false;
            		}
HXDLIN( 293)		if (_hx_tmp1) {
HXLINE( 293)			_hx_tmp = !(this->mouseChildren);
            		}
            		else {
HXLINE( 293)			_hx_tmp = false;
            		}
HXDLIN( 293)		if (_hx_tmp) {
HXLINE( 293)			return false;
            		}
HXLINE( 294)		bool _hx_tmp2;
HXDLIN( 294)		if (hitObject->get_visible()) {
HXLINE( 294)			_hx_tmp2 = this->_hx___isMask;
            		}
            		else {
HXLINE( 294)			_hx_tmp2 = true;
            		}
HXDLIN( 294)		if (_hx_tmp2) {
HXLINE( 294)			return this->_hx___hitTestHitArea(x,y,shapeFlag,stack,interactiveOnly,hitObject);
            		}
HXLINE( 295)		bool _hx_tmp3;
HXDLIN( 295)		if (::hx::IsNotNull( this->get_mask() )) {
HXLINE( 295)			_hx_tmp3 = !(this->get_mask()->_hx___hitTestMask(x,y));
            		}
            		else {
HXLINE( 295)			_hx_tmp3 = false;
            		}
HXDLIN( 295)		if (_hx_tmp3) {
HXLINE( 295)			return this->_hx___hitTestHitArea(x,y,shapeFlag,stack,interactiveOnly,hitObject);
            		}
HXLINE( 297)		if (::hx::IsNotNull( this->_hx___scrollRect )) {
HXLINE( 299)			 ::openfl::geom::Point point = ::openfl::geom::Point_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Point >();
HXLINE( 300)			point->setTo(x,y);
HXLINE( 301)			{
HXLINE( 301)				 ::openfl::geom::Matrix _this = this->_hx___getRenderTransform();
HXDLIN( 301)				Float norm = ((_this->a * _this->d) - (_this->b * _this->c));
HXDLIN( 301)				if ((norm == 0)) {
HXLINE( 301)					point->x = -(_this->tx);
HXDLIN( 301)					point->y = -(_this->ty);
            				}
            				else {
HXLINE( 301)					Float px = ((((Float)1.0) / norm) * ((_this->c * (_this->ty - point->y)) + (_this->d * (point->x - _this->tx))));
HXDLIN( 301)					point->y = ((((Float)1.0) / norm) * ((_this->a * (point->y - _this->ty)) + (_this->b * (_this->tx - point->x))));
HXDLIN( 301)					point->x = px;
            				}
            			}
HXLINE( 303)			if (!(this->_hx___scrollRect->containsPoint(point))) {
HXLINE( 305)				::openfl::geom::Point_obj::_hx___pool->release(point);
HXLINE( 306)				return this->_hx___hitTestHitArea(x,y,shapeFlag,stack,true,hitObject);
            			}
HXLINE( 309)			::openfl::geom::Point_obj::_hx___pool->release(point);
            		}
HXLINE( 312)		if (this->super::_hx___hitTest(x,y,shapeFlag,stack,interactiveOnly,hitObject)) {
HXLINE( 314)			if (::hx::IsNotNull( stack )) {
HXLINE( 314)				return interactiveOnly;
            			}
            			else {
HXLINE( 314)				return true;
            			}
            		}
            		else {
HXLINE( 316)			bool _hx_tmp;
HXDLIN( 316)			bool _hx_tmp1;
HXDLIN( 316)			if (::hx::IsNull( this->hitArea )) {
HXLINE( 316)				_hx_tmp1 = ::hx::IsNotNull( this->_hx___graphics );
            			}
            			else {
HXLINE( 316)				_hx_tmp1 = false;
            			}
HXDLIN( 316)			if (_hx_tmp1) {
HXLINE( 316)				 ::openfl::display::Graphics _hx_tmp1 = this->_hx___graphics;
HXDLIN( 316)				_hx_tmp = _hx_tmp1->_hx___hitTest(x,y,shapeFlag,this->_hx___getRenderTransform());
            			}
            			else {
HXLINE( 316)				_hx_tmp = false;
            			}
HXDLIN( 316)			if (_hx_tmp) {
HXLINE( 318)				bool _hx_tmp;
HXDLIN( 318)				if (::hx::IsNotNull( stack )) {
HXLINE( 318)					if (interactiveOnly) {
HXLINE( 318)						_hx_tmp = this->mouseEnabled;
            					}
            					else {
HXLINE( 318)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE( 318)					_hx_tmp = false;
            				}
HXDLIN( 318)				if (_hx_tmp) {
HXLINE( 320)					stack->push(hitObject);
            				}
HXLINE( 323)				return true;
            			}
            		}
HXLINE( 326)		return this->_hx___hitTestHitArea(x,y,shapeFlag,stack,interactiveOnly,hitObject);
            	}


bool Sprite_obj::_hx___hitTestHitArea(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject){
            	HX_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_331___hitTestHitArea)
HXLINE( 332)		if (::hx::IsNotNull( this->hitArea )) {
HXLINE( 334)			if (!(this->hitArea->mouseEnabled)) {
HXLINE( 336)				this->hitArea->mouseEnabled = true;
HXLINE( 337)				bool hitTest = this->hitArea->_hx___hitTest(x,y,shapeFlag,null(),true,hitObject);
HXLINE( 338)				this->hitArea->mouseEnabled = false;
HXLINE( 340)				bool _hx_tmp;
HXDLIN( 340)				if (::hx::IsNotNull( stack )) {
HXLINE( 340)					_hx_tmp = hitTest;
            				}
            				else {
HXLINE( 340)					_hx_tmp = false;
            				}
HXDLIN( 340)				if (_hx_tmp) {
HXLINE( 342)					stack[stack->length] = hitObject;
            				}
HXLINE( 345)				return hitTest;
            			}
            		}
HXLINE( 349)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC6(Sprite_obj,_hx___hitTestHitArea,return )

bool Sprite_obj::_hx___hitTestMask(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_353___hitTestMask)
HXLINE( 354)		if (this->super::_hx___hitTestMask(x,y)) {
HXLINE( 356)			return true;
            		}
            		else {
HXLINE( 358)			bool _hx_tmp;
HXDLIN( 358)			if (::hx::IsNotNull( this->_hx___graphics )) {
HXLINE( 358)				 ::openfl::display::Graphics _hx_tmp1 = this->_hx___graphics;
HXDLIN( 358)				_hx_tmp = _hx_tmp1->_hx___hitTest(x,y,true,this->_hx___getRenderTransform());
            			}
            			else {
HXLINE( 358)				_hx_tmp = false;
            			}
HXDLIN( 358)			if (_hx_tmp) {
HXLINE( 360)				return true;
            			}
            		}
HXLINE( 363)		return false;
            	}


 ::openfl::display::Graphics Sprite_obj::get_graphics(){
            	HX_GC_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_368_get_graphics)
HXLINE( 369)		if (::hx::IsNull( this->_hx___graphics )) {
HXLINE( 371)			this->_hx___graphics =  ::openfl::display::Graphics_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 374)		return this->_hx___graphics;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,get_graphics,return )

bool Sprite_obj::get_tabEnabled(){
            	HX_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_379_get_tabEnabled)
HXDLIN( 379)		if (::hx::IsNull( this->_hx___tabEnabled )) {
HXDLIN( 379)			return this->_hx___buttonMode;
            		}
            		else {
HXDLIN( 379)			return ( (bool)(this->_hx___tabEnabled) );
            		}
HXDLIN( 379)		return false;
            	}


bool Sprite_obj::get_buttonMode(){
            	HX_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_384_get_buttonMode)
HXDLIN( 384)		return this->_hx___buttonMode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,get_buttonMode,return )

bool Sprite_obj::set_buttonMode(bool value){
            	HX_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_389_set_buttonMode)
HXDLIN( 389)		return (this->_hx___buttonMode = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,set_buttonMode,return )

 ::Dynamic Sprite_obj::_hx___constructor;

 ::openfl::display::Sprite Sprite_obj::fromTimeline( ::openfl::display::Timeline timeline){
            	HX_GC_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_184_fromTimeline)
HXLINE( 185)		 ::openfl::display::Sprite sprite =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE( 186)		timeline->initializeSprite(sprite);
HXLINE( 187)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,fromTimeline,return )


::hx::ObjectPtr< Sprite_obj > Sprite_obj::__new() {
	::hx::ObjectPtr< Sprite_obj > __this = new Sprite_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Sprite_obj > Sprite_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Sprite_obj *__this = (Sprite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Sprite_obj), true, "openfl.display.Sprite"));
	*(void **)__this = Sprite_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Sprite_obj::Sprite_obj()
{
}

void Sprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sprite);
	HX_MARK_MEMBER_NAME(dropTarget,"dropTarget");
	HX_MARK_MEMBER_NAME(hitArea,"hitArea");
	HX_MARK_MEMBER_NAME(useHandCursor,"useHandCursor");
	HX_MARK_MEMBER_NAME(_hx___buttonMode,"__buttonMode");
	HX_MARK_MEMBER_NAME(_hx___pendingBindClassName,"__pendingBindClassName");
	HX_MARK_MEMBER_NAME(_hx___pendingBindLibrary,"__pendingBindLibrary");
	 ::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Sprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dropTarget,"dropTarget");
	HX_VISIT_MEMBER_NAME(hitArea,"hitArea");
	HX_VISIT_MEMBER_NAME(useHandCursor,"useHandCursor");
	HX_VISIT_MEMBER_NAME(_hx___buttonMode,"__buttonMode");
	HX_VISIT_MEMBER_NAME(_hx___pendingBindClassName,"__pendingBindClassName");
	HX_VISIT_MEMBER_NAME(_hx___pendingBindLibrary,"__pendingBindLibrary");
	 ::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Sprite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__bind") ) { return ::hx::Val( _hx___bind_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hitArea") ) { return ::hx::Val( hitArea ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_graphics() ); }
		if (HX_FIELD_EQ(inName,"stopDrag") ) { return ::hx::Val( stopDrag_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startDrag") ) { return ::hx::Val( startDrag_dyn() ); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return ::hx::Val( _hx___hitTest_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_buttonMode() ); }
		if (HX_FIELD_EQ(inName,"dropTarget") ) { return ::hx::Val( dropTarget ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__getCursor") ) { return ::hx::Val( _hx___getCursor_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__buttonMode") ) { return ::hx::Val( _hx___buttonMode ); }
		if (HX_FIELD_EQ(inName,"get_graphics") ) { return ::hx::Val( get_graphics_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { return ::hx::Val( useHandCursor ); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return ::hx::Val( _hx___hitTestMask_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_tabEnabled") ) { return ::hx::Val( get_tabEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_buttonMode") ) { return ::hx::Val( get_buttonMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_buttonMode") ) { return ::hx::Val( set_buttonMode_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__hitTestHitArea") ) { return ::hx::Val( _hx___hitTestHitArea_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__pendingBindLibrary") ) { return ::hx::Val( _hx___pendingBindLibrary ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__pendingBindClassName") ) { return ::hx::Val( _hx___pendingBindClassName ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Sprite_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"fromTimeline") ) { outValue = fromTimeline_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__constructor") ) { outValue = ( _hx___constructor ); return true; }
	}
	return false;
}

::hx::Val Sprite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"hitArea") ) { hitArea=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_buttonMode(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"dropTarget") ) { dropTarget=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__buttonMode") ) { _hx___buttonMode=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { useHandCursor=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__pendingBindLibrary") ) { _hx___pendingBindLibrary=inValue.Cast<  ::openfl::utils::AssetLibrary >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__pendingBindClassName") ) { _hx___pendingBindClassName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Sprite_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"__constructor") ) { _hx___constructor=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void Sprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("buttonMode",75,42,57,b2));
	outFields->push(HX_("dropTarget",e0,6c,5c,c6));
	outFields->push(HX_("graphics",cb,f8,67,12));
	outFields->push(HX_("hitArea",80,23,fa,d5));
	outFields->push(HX_("useHandCursor",cc,da,ae,89));
	outFields->push(HX_("__buttonMode",95,bd,ea,ea));
	outFields->push(HX_("__pendingBindClassName",6f,0d,82,98));
	outFields->push(HX_("__pendingBindLibrary",c7,16,00,c4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Sprite_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(Sprite_obj,dropTarget),HX_("dropTarget",e0,6c,5c,c6)},
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(Sprite_obj,hitArea),HX_("hitArea",80,23,fa,d5)},
	{::hx::fsBool,(int)offsetof(Sprite_obj,useHandCursor),HX_("useHandCursor",cc,da,ae,89)},
	{::hx::fsBool,(int)offsetof(Sprite_obj,_hx___buttonMode),HX_("__buttonMode",95,bd,ea,ea)},
	{::hx::fsString,(int)offsetof(Sprite_obj,_hx___pendingBindClassName),HX_("__pendingBindClassName",6f,0d,82,98)},
	{::hx::fsObject /*  ::openfl::utils::AssetLibrary */ ,(int)offsetof(Sprite_obj,_hx___pendingBindLibrary),HX_("__pendingBindLibrary",c7,16,00,c4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Sprite_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Sprite_obj::_hx___constructor,HX_("__constructor",da,6d,3d,e0)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Sprite_obj_sMemberFields[] = {
	HX_("dropTarget",e0,6c,5c,c6),
	HX_("hitArea",80,23,fa,d5),
	HX_("useHandCursor",cc,da,ae,89),
	HX_("__buttonMode",95,bd,ea,ea),
	HX_("__pendingBindClassName",6f,0d,82,98),
	HX_("__pendingBindLibrary",c7,16,00,c4),
	HX_("startDrag",76,a5,63,fb),
	HX_("stopDrag",16,71,2a,95),
	HX_("__bind",dd,58,0f,f0),
	HX_("__getCursor",ec,60,6b,e9),
	HX_("__hitTest",25,b1,cd,63),
	HX_("__hitTestHitArea",db,38,50,28),
	HX_("__hitTestMask",b1,14,fd,3b),
	HX_("get_graphics",d4,ac,81,c7),
	HX_("get_tabEnabled",f5,7e,fe,b5),
	HX_("get_buttonMode",be,ca,4c,28),
	HX_("set_buttonMode",32,b3,6c,48),
	::String(null()) };

static void Sprite_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sprite_obj::_hx___constructor,"__constructor");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Sprite_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sprite_obj::_hx___constructor,"__constructor");
};

#endif

::hx::Class Sprite_obj::__mClass;

static ::String Sprite_obj_sStaticFields[] = {
	HX_("__constructor",da,6d,3d,e0),
	HX_("fromTimeline",0b,4a,52,9d),
	::String(null())
};

void Sprite_obj::__register()
{
	Sprite_obj _hx_dummy;
	Sprite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.Sprite",ef,fb,d6,4d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sprite_obj::__GetStatic;
	__mClass->mSetStaticField = &Sprite_obj::__SetStatic;
	__mClass->mMarkFunc = Sprite_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Sprite_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Sprite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Sprite_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Sprite_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sprite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
