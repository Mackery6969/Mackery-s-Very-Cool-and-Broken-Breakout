#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_GameInputEvent
#include <openfl/events/GameInputEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInput
#include <openfl/ui/GameInput.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInputControl
#include <openfl/ui/GameInputControl.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInputDevice
#include <openfl/ui/GameInputDevice.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bf4ee6978d1f0060_87_new,"openfl.ui.GameInput","new",0x178f028e,"openfl.ui.GameInput.new","openfl/ui/GameInput.hx",87,0x96cdaf42)
HX_LOCAL_STACK_FRAME(_hx_pos_bf4ee6978d1f0060_96_addEventListener,"openfl.ui.GameInput","addEventListener",0x86b694df,"openfl.ui.GameInput.addEventListener","openfl/ui/GameInput.hx",96,0x96cdaf42)
HX_LOCAL_STACK_FRAME(_hx_pos_bf4ee6978d1f0060_122_getDeviceAt,"openfl.ui.GameInput","getDeviceAt",0x22aaba0d,"openfl.ui.GameInput.getDeviceAt","openfl/ui/GameInput.hx",122,0x96cdaf42)
HX_LOCAL_STACK_FRAME(_hx_pos_bf4ee6978d1f0060_133___getDevice,"openfl.ui.GameInput","__getDevice",0x7418beda,"openfl.ui.GameInput.__getDevice","openfl/ui/GameInput.hx",133,0x96cdaf42)
HX_LOCAL_STACK_FRAME(_hx_pos_bf4ee6978d1f0060_150___onGamepadAxisMove,"openfl.ui.GameInput","__onGamepadAxisMove",0x7bd40ec2,"openfl.ui.GameInput.__onGamepadAxisMove","openfl/ui/GameInput.hx",150,0x96cdaf42)
HX_LOCAL_STACK_FRAME(_hx_pos_bf4ee6978d1f0060_172___onGamepadButtonDown,"openfl.ui.GameInput","__onGamepadButtonDown",0xedf461e4,"openfl.ui.GameInput.__onGamepadButtonDown","openfl/ui/GameInput.hx",172,0x96cdaf42)
HX_LOCAL_STACK_FRAME(_hx_pos_bf4ee6978d1f0060_194___onGamepadButtonUp,"openfl.ui.GameInput","__onGamepadButtonUp",0x48120b5d,"openfl.ui.GameInput.__onGamepadButtonUp","openfl/ui/GameInput.hx",194,0x96cdaf42)
HX_LOCAL_STACK_FRAME(_hx_pos_bf4ee6978d1f0060_216___onGamepadConnect,"openfl.ui.GameInput","__onGamepadConnect",0xce3c5b7a,"openfl.ui.GameInput.__onGamepadConnect","openfl/ui/GameInput.hx",216,0x96cdaf42)
HX_LOCAL_STACK_FRAME(_hx_pos_bf4ee6978d1f0060_229___onGamepadDisconnect,"openfl.ui.GameInput","__onGamepadDisconnect",0xaad45ecc,"openfl.ui.GameInput.__onGamepadDisconnect","openfl/ui/GameInput.hx",229,0x96cdaf42)
HX_LOCAL_STACK_FRAME(_hx_pos_bf4ee6978d1f0060_67_boot,"openfl.ui.GameInput","boot",0x7dac3a44,"openfl.ui.GameInput.boot","openfl/ui/GameInput.hx",67,0x96cdaf42)
HX_LOCAL_STACK_FRAME(_hx_pos_bf4ee6978d1f0060_72_boot,"openfl.ui.GameInput","boot",0x7dac3a44,"openfl.ui.GameInput.boot","openfl/ui/GameInput.hx",72,0x96cdaf42)
HX_LOCAL_STACK_FRAME(_hx_pos_bf4ee6978d1f0060_78_boot,"openfl.ui.GameInput","boot",0x7dac3a44,"openfl.ui.GameInput.boot","openfl/ui/GameInput.hx",78,0x96cdaf42)
HX_LOCAL_STACK_FRAME(_hx_pos_bf4ee6978d1f0060_80_boot,"openfl.ui.GameInput","boot",0x7dac3a44,"openfl.ui.GameInput.boot","openfl/ui/GameInput.hx",80,0x96cdaf42)
HX_LOCAL_STACK_FRAME(_hx_pos_bf4ee6978d1f0060_81_boot,"openfl.ui.GameInput","boot",0x7dac3a44,"openfl.ui.GameInput.boot","openfl/ui/GameInput.hx",81,0x96cdaf42)
HX_LOCAL_STACK_FRAME(_hx_pos_bf4ee6978d1f0060_83_boot,"openfl.ui.GameInput","boot",0x7dac3a44,"openfl.ui.GameInput.boot","openfl/ui/GameInput.hx",83,0x96cdaf42)
namespace openfl{
namespace ui{

void GameInput_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_bf4ee6978d1f0060_87_new)
HXLINE(  88)		super::__construct(null());
HXLINE(  90)		::openfl::ui::GameInput_obj::_hx___instances->push(::hx::ObjectPtr<OBJ_>(this));
            	}

Dynamic GameInput_obj::__CreateEmpty() { return new GameInput_obj; }

void *GameInput_obj::_hx_vtable = 0;

Dynamic GameInput_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GameInput_obj > _hx_result = new GameInput_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GameInput_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x023be2f4) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x023be2f4;
	} else {
		return inClassId==(int)0x0c89e854;
	}
}

void GameInput_obj::addEventListener(::String type, ::Dynamic listener,::hx::Null< bool >  __o_useCapture,::hx::Null< int >  __o_priority,::hx::Null< bool >  __o_useWeakReference){
            		bool useCapture = __o_useCapture.Default(false);
            		int priority = __o_priority.Default(0);
            		bool useWeakReference = __o_useWeakReference.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_bf4ee6978d1f0060_96_addEventListener)
HXLINE(  97)		this->super::addEventListener(type,listener,useCapture,priority,useWeakReference);
HXLINE(  99)		if ((type == HX_("deviceAdded",4a,08,84,0b))) {
HXLINE( 101)			int _g = 0;
HXDLIN( 101)			::Array< ::Dynamic> _g1 = ::openfl::ui::GameInput_obj::_hx___deviceList;
HXDLIN( 101)			while((_g < _g1->length)){
HXLINE( 101)				 ::openfl::ui::GameInputDevice device = _g1->__get(_g).StaticCast<  ::openfl::ui::GameInputDevice >();
HXDLIN( 101)				_g = (_g + 1);
HXLINE( 103)				this->dispatchEvent( ::openfl::events::GameInputEvent_obj::__alloc( HX_CTX ,HX_("deviceAdded",4a,08,84,0b),true,false,device));
            			}
            		}
            	}


bool GameInput_obj::isSupported;

int GameInput_obj::numDevices;

::Array< ::Dynamic> GameInput_obj::_hx___deviceList;

::Array< ::Dynamic> GameInput_obj::_hx___instances;

 ::haxe::ds::ObjectMap GameInput_obj::_hx___devices;

 ::openfl::ui::GameInputDevice GameInput_obj::getDeviceAt(int index){
            	HX_STACKFRAME(&_hx_pos_bf4ee6978d1f0060_122_getDeviceAt)
HXLINE( 123)		bool _hx_tmp;
HXDLIN( 123)		if ((index >= 0)) {
HXLINE( 123)			_hx_tmp = (index < ::openfl::ui::GameInput_obj::_hx___deviceList->length);
            		}
            		else {
HXLINE( 123)			_hx_tmp = false;
            		}
HXDLIN( 123)		if (_hx_tmp) {
HXLINE( 125)			return ::openfl::ui::GameInput_obj::_hx___deviceList->__get(index).StaticCast<  ::openfl::ui::GameInputDevice >();
            		}
HXLINE( 128)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GameInput_obj,getDeviceAt,return )

 ::openfl::ui::GameInputDevice GameInput_obj::_hx___getDevice( ::lime::ui::Gamepad gamepad){
            	HX_GC_STACKFRAME(&_hx_pos_bf4ee6978d1f0060_133___getDevice)
HXLINE( 134)		if (::hx::IsNull( gamepad )) {
HXLINE( 134)			return null();
            		}
HXLINE( 136)		if (!(::openfl::ui::GameInput_obj::_hx___devices->exists(gamepad))) {
HXLINE( 138)			::String device = ( (::String)(( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_gamepad_get_device_guid(gamepad->id)) )) );
HXDLIN( 138)			 ::openfl::ui::GameInputDevice device1 =  ::openfl::ui::GameInputDevice_obj::__alloc( HX_CTX ,device,( (::String)(( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_gamepad_get_device_name(gamepad->id)) )) ));
HXLINE( 139)			::openfl::ui::GameInput_obj::_hx___deviceList->push(device1);
HXLINE( 140)			::openfl::ui::GameInput_obj::_hx___devices->set(gamepad,device1);
HXLINE( 141)			::openfl::ui::GameInput_obj::numDevices = ::openfl::ui::GameInput_obj::_hx___deviceList->length;
            		}
HXLINE( 144)		return ( ( ::openfl::ui::GameInputDevice)(::openfl::ui::GameInput_obj::_hx___devices->get(gamepad)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GameInput_obj,_hx___getDevice,return )

void GameInput_obj::_hx___onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value){
            	HX_GC_STACKFRAME(&_hx_pos_bf4ee6978d1f0060_150___onGamepadAxisMove)
HXLINE( 151)		 ::openfl::ui::GameInputDevice device = ::openfl::ui::GameInput_obj::_hx___getDevice(gamepad);
HXLINE( 152)		if (::hx::IsNull( device )) {
HXLINE( 152)			return;
            		}
HXLINE( 154)		if (device->enabled) {
HXLINE( 156)			if (!(device->_hx___axis->exists(axis))) {
HXLINE( 158)				::String control;
HXDLIN( 158)				switch((int)(axis)){
            					case (int)0: {
HXLINE( 158)						control = HX_("LEFT_X",e0,72,4a,4c);
            					}
            					break;
            					case (int)1: {
HXLINE( 158)						control = HX_("LEFT_Y",e1,72,4a,4c);
            					}
            					break;
            					case (int)2: {
HXLINE( 158)						control = HX_("RIGHT_X",d5,fd,37,93);
            					}
            					break;
            					case (int)3: {
HXLINE( 158)						control = HX_("RIGHT_Y",d6,fd,37,93);
            					}
            					break;
            					case (int)4: {
HXLINE( 158)						control = HX_("TRIGGER_LEFT",ce,cb,4a,f1);
            					}
            					break;
            					case (int)5: {
HXLINE( 158)						control = HX_("TRIGGER_RIGHT",15,96,34,a7);
            					}
            					break;
            					default:{
HXLINE( 158)						control = ((HX_("UNKNOWN (",f2,41,8b,8c) + axis) + HX_(")",29,00,00,00));
            					}
            				}
HXDLIN( 158)				 ::openfl::ui::GameInputControl control1 =  ::openfl::ui::GameInputControl_obj::__alloc( HX_CTX ,device,(HX_("AXIS_",9e,28,6e,a7) + control),( (Float)(-1) ),( (Float)(1) ),null());
HXLINE( 159)				device->_hx___axis->set(axis,control1);
HXLINE( 160)				device->_hx___controls->push(control1);
            			}
HXLINE( 163)			 ::openfl::ui::GameInputControl control = ( ( ::openfl::ui::GameInputControl)(device->_hx___axis->get(axis)) );
HXLINE( 164)			control->value = value;
HXLINE( 165)			control->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null()));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GameInput_obj,_hx___onGamepadAxisMove,(void))

void GameInput_obj::_hx___onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button){
            	HX_GC_STACKFRAME(&_hx_pos_bf4ee6978d1f0060_172___onGamepadButtonDown)
HXLINE( 173)		 ::openfl::ui::GameInputDevice device = ::openfl::ui::GameInput_obj::_hx___getDevice(gamepad);
HXLINE( 174)		if (::hx::IsNull( device )) {
HXLINE( 174)			return;
            		}
HXLINE( 176)		if (device->enabled) {
HXLINE( 178)			if (!(device->_hx___button->exists(button))) {
HXLINE( 180)				::String control;
HXDLIN( 180)				switch((int)(button)){
            					case (int)0: {
HXLINE( 180)						control = HX_("A",41,00,00,00);
            					}
            					break;
            					case (int)1: {
HXLINE( 180)						control = HX_("B",42,00,00,00);
            					}
            					break;
            					case (int)2: {
HXLINE( 180)						control = HX_("X",58,00,00,00);
            					}
            					break;
            					case (int)3: {
HXLINE( 180)						control = HX_("Y",59,00,00,00);
            					}
            					break;
            					case (int)4: {
HXLINE( 180)						control = HX_("BACK",27,a2,d1,2b);
            					}
            					break;
            					case (int)5: {
HXLINE( 180)						control = HX_("GUIDE",9c,f2,d9,19);
            					}
            					break;
            					case (int)6: {
HXLINE( 180)						control = HX_("START",42,ac,f9,01);
            					}
            					break;
            					case (int)7: {
HXLINE( 180)						control = HX_("LEFT_STICK",b8,07,ea,37);
            					}
            					break;
            					case (int)8: {
HXLINE( 180)						control = HX_("RIGHT_STICK",2d,b1,90,56);
            					}
            					break;
            					case (int)9: {
HXLINE( 180)						control = HX_("LEFT_SHOULDER",d8,b1,a9,01);
            					}
            					break;
            					case (int)10: {
HXLINE( 180)						control = HX_("RIGHT_SHOULDER",83,9f,28,11);
            					}
            					break;
            					case (int)11: {
HXLINE( 180)						control = HX_("DPAD_UP",6b,00,87,a2);
            					}
            					break;
            					case (int)12: {
HXLINE( 180)						control = HX_("DPAD_DOWN",72,1a,5b,87);
            					}
            					break;
            					case (int)13: {
HXLINE( 180)						control = HX_("DPAD_LEFT",17,2a,9d,8c);
            					}
            					break;
            					case (int)14: {
HXLINE( 180)						control = HX_("DPAD_RIGHT",ac,b7,f4,f3);
            					}
            					break;
            					default:{
HXLINE( 180)						control = ((HX_("UNKNOWN (",f2,41,8b,8c) + button) + HX_(")",29,00,00,00));
            					}
            				}
HXDLIN( 180)				 ::openfl::ui::GameInputControl control1 =  ::openfl::ui::GameInputControl_obj::__alloc( HX_CTX ,device,(HX_("BUTTON_",2d,26,49,4a) + control),( (Float)(0) ),( (Float)(1) ),null());
HXLINE( 181)				device->_hx___button->set(button,control1);
HXLINE( 182)				device->_hx___controls->push(control1);
            			}
HXLINE( 185)			 ::openfl::ui::GameInputControl control = ( ( ::openfl::ui::GameInputControl)(device->_hx___button->get(button)) );
HXLINE( 186)			control->value = ( (Float)(1) );
HXLINE( 187)			control->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null()));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameInput_obj,_hx___onGamepadButtonDown,(void))

void GameInput_obj::_hx___onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button){
            	HX_GC_STACKFRAME(&_hx_pos_bf4ee6978d1f0060_194___onGamepadButtonUp)
HXLINE( 195)		 ::openfl::ui::GameInputDevice device = ::openfl::ui::GameInput_obj::_hx___getDevice(gamepad);
HXLINE( 196)		if (::hx::IsNull( device )) {
HXLINE( 196)			return;
            		}
HXLINE( 198)		if (device->enabled) {
HXLINE( 200)			if (!(device->_hx___button->exists(button))) {
HXLINE( 202)				::String control;
HXDLIN( 202)				switch((int)(button)){
            					case (int)0: {
HXLINE( 202)						control = HX_("A",41,00,00,00);
            					}
            					break;
            					case (int)1: {
HXLINE( 202)						control = HX_("B",42,00,00,00);
            					}
            					break;
            					case (int)2: {
HXLINE( 202)						control = HX_("X",58,00,00,00);
            					}
            					break;
            					case (int)3: {
HXLINE( 202)						control = HX_("Y",59,00,00,00);
            					}
            					break;
            					case (int)4: {
HXLINE( 202)						control = HX_("BACK",27,a2,d1,2b);
            					}
            					break;
            					case (int)5: {
HXLINE( 202)						control = HX_("GUIDE",9c,f2,d9,19);
            					}
            					break;
            					case (int)6: {
HXLINE( 202)						control = HX_("START",42,ac,f9,01);
            					}
            					break;
            					case (int)7: {
HXLINE( 202)						control = HX_("LEFT_STICK",b8,07,ea,37);
            					}
            					break;
            					case (int)8: {
HXLINE( 202)						control = HX_("RIGHT_STICK",2d,b1,90,56);
            					}
            					break;
            					case (int)9: {
HXLINE( 202)						control = HX_("LEFT_SHOULDER",d8,b1,a9,01);
            					}
            					break;
            					case (int)10: {
HXLINE( 202)						control = HX_("RIGHT_SHOULDER",83,9f,28,11);
            					}
            					break;
            					case (int)11: {
HXLINE( 202)						control = HX_("DPAD_UP",6b,00,87,a2);
            					}
            					break;
            					case (int)12: {
HXLINE( 202)						control = HX_("DPAD_DOWN",72,1a,5b,87);
            					}
            					break;
            					case (int)13: {
HXLINE( 202)						control = HX_("DPAD_LEFT",17,2a,9d,8c);
            					}
            					break;
            					case (int)14: {
HXLINE( 202)						control = HX_("DPAD_RIGHT",ac,b7,f4,f3);
            					}
            					break;
            					default:{
HXLINE( 202)						control = ((HX_("UNKNOWN (",f2,41,8b,8c) + button) + HX_(")",29,00,00,00));
            					}
            				}
HXDLIN( 202)				 ::openfl::ui::GameInputControl control1 =  ::openfl::ui::GameInputControl_obj::__alloc( HX_CTX ,device,(HX_("BUTTON_",2d,26,49,4a) + control),( (Float)(0) ),( (Float)(1) ),null());
HXLINE( 203)				device->_hx___button->set(button,control1);
HXLINE( 204)				device->_hx___controls->push(control1);
            			}
HXLINE( 207)			 ::openfl::ui::GameInputControl control = ( ( ::openfl::ui::GameInputControl)(device->_hx___button->get(button)) );
HXLINE( 208)			control->value = ( (Float)(0) );
HXLINE( 209)			control->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null()));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameInput_obj,_hx___onGamepadButtonUp,(void))

void GameInput_obj::_hx___onGamepadConnect( ::lime::ui::Gamepad gamepad){
            	HX_GC_STACKFRAME(&_hx_pos_bf4ee6978d1f0060_216___onGamepadConnect)
HXLINE( 217)		 ::openfl::ui::GameInputDevice device = ::openfl::ui::GameInput_obj::_hx___getDevice(gamepad);
HXLINE( 218)		if (::hx::IsNull( device )) {
HXLINE( 218)			return;
            		}
HXLINE( 220)		{
HXLINE( 220)			int _g = 0;
HXDLIN( 220)			::Array< ::Dynamic> _g1 = ::openfl::ui::GameInput_obj::_hx___instances;
HXDLIN( 220)			while((_g < _g1->length)){
HXLINE( 220)				 ::openfl::ui::GameInput instance = _g1->__get(_g).StaticCast<  ::openfl::ui::GameInput >();
HXDLIN( 220)				_g = (_g + 1);
HXLINE( 222)				instance->dispatchEvent( ::openfl::events::GameInputEvent_obj::__alloc( HX_CTX ,HX_("deviceAdded",4a,08,84,0b),true,false,device));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GameInput_obj,_hx___onGamepadConnect,(void))

void GameInput_obj::_hx___onGamepadDisconnect( ::lime::ui::Gamepad gamepad){
            	HX_GC_STACKFRAME(&_hx_pos_bf4ee6978d1f0060_229___onGamepadDisconnect)
HXLINE( 230)		 ::openfl::ui::GameInputDevice device = ( ( ::openfl::ui::GameInputDevice)(::openfl::ui::GameInput_obj::_hx___devices->get(gamepad)) );
HXLINE( 232)		if (::hx::IsNotNull( device )) {
HXLINE( 234)			if (::openfl::ui::GameInput_obj::_hx___devices->exists(gamepad)) {
HXLINE( 236)				::Array< ::Dynamic> _hx_tmp = ::openfl::ui::GameInput_obj::_hx___deviceList;
HXDLIN( 236)				_hx_tmp->remove(::openfl::ui::GameInput_obj::_hx___devices->get(gamepad));
HXLINE( 237)				::openfl::ui::GameInput_obj::_hx___devices->remove(gamepad);
            			}
HXLINE( 240)			::openfl::ui::GameInput_obj::numDevices = ::openfl::ui::GameInput_obj::_hx___deviceList->length;
HXLINE( 242)			{
HXLINE( 242)				int _g = 0;
HXDLIN( 242)				::Array< ::Dynamic> _g1 = ::openfl::ui::GameInput_obj::_hx___instances;
HXDLIN( 242)				while((_g < _g1->length)){
HXLINE( 242)					 ::openfl::ui::GameInput instance = _g1->__get(_g).StaticCast<  ::openfl::ui::GameInput >();
HXDLIN( 242)					_g = (_g + 1);
HXLINE( 244)					instance->dispatchEvent( ::openfl::events::GameInputEvent_obj::__alloc( HX_CTX ,HX_("deviceRemoved",aa,c9,5b,59),true,false,device));
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GameInput_obj,_hx___onGamepadDisconnect,(void))


::hx::ObjectPtr< GameInput_obj > GameInput_obj::__new() {
	::hx::ObjectPtr< GameInput_obj > __this = new GameInput_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< GameInput_obj > GameInput_obj::__alloc(::hx::Ctx *_hx_ctx) {
	GameInput_obj *__this = (GameInput_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GameInput_obj), true, "openfl.ui.GameInput"));
	*(void **)__this = GameInput_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GameInput_obj::GameInput_obj()
{
}

::hx::Val GameInput_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return ::hx::Val( addEventListener_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool GameInput_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"__devices") ) { outValue = ( _hx___devices ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numDevices") ) { outValue = ( numDevices ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { outValue = ( isSupported ); return true; }
		if (HX_FIELD_EQ(inName,"__instances") ) { outValue = ( _hx___instances ); return true; }
		if (HX_FIELD_EQ(inName,"getDeviceAt") ) { outValue = getDeviceAt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__getDevice") ) { outValue = _hx___getDevice_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__deviceList") ) { outValue = ( _hx___deviceList ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__onGamepadConnect") ) { outValue = _hx___onGamepadConnect_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__onGamepadAxisMove") ) { outValue = _hx___onGamepadAxisMove_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__onGamepadButtonUp") ) { outValue = _hx___onGamepadButtonUp_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__onGamepadButtonDown") ) { outValue = _hx___onGamepadButtonDown_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__onGamepadDisconnect") ) { outValue = _hx___onGamepadDisconnect_dyn(); return true; }
	}
	return false;
}

bool GameInput_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"__devices") ) { _hx___devices=ioValue.Cast<  ::haxe::ds::ObjectMap >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numDevices") ) { numDevices=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { isSupported=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"__instances") ) { _hx___instances=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__deviceList") ) { _hx___deviceList=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GameInput_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo GameInput_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &GameInput_obj::isSupported,HX_("isSupported",e4,7c,8a,f3)},
	{::hx::fsInt,(void *) &GameInput_obj::numDevices,HX_("numDevices",77,65,89,07)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &GameInput_obj::_hx___deviceList,HX_("__deviceList",34,a3,d0,e9)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &GameInput_obj::_hx___instances,HX_("__instances",1e,cc,46,79)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(void *) &GameInput_obj::_hx___devices,HX_("__devices",fd,77,b7,58)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String GameInput_obj_sMemberFields[] = {
	HX_("addEventListener",cd,0b,64,f1),
	::String(null()) };

static void GameInput_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameInput_obj::isSupported,"isSupported");
	HX_MARK_MEMBER_NAME(GameInput_obj::numDevices,"numDevices");
	HX_MARK_MEMBER_NAME(GameInput_obj::_hx___deviceList,"__deviceList");
	HX_MARK_MEMBER_NAME(GameInput_obj::_hx___instances,"__instances");
	HX_MARK_MEMBER_NAME(GameInput_obj::_hx___devices,"__devices");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GameInput_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameInput_obj::isSupported,"isSupported");
	HX_VISIT_MEMBER_NAME(GameInput_obj::numDevices,"numDevices");
	HX_VISIT_MEMBER_NAME(GameInput_obj::_hx___deviceList,"__deviceList");
	HX_VISIT_MEMBER_NAME(GameInput_obj::_hx___instances,"__instances");
	HX_VISIT_MEMBER_NAME(GameInput_obj::_hx___devices,"__devices");
};

#endif

::hx::Class GameInput_obj::__mClass;

static ::String GameInput_obj_sStaticFields[] = {
	HX_("isSupported",e4,7c,8a,f3),
	HX_("numDevices",77,65,89,07),
	HX_("__deviceList",34,a3,d0,e9),
	HX_("__instances",1e,cc,46,79),
	HX_("__devices",fd,77,b7,58),
	HX_("getDeviceAt",df,a9,8c,ca),
	HX_("__getDevice",ac,ae,fa,1b),
	HX_("__onGamepadAxisMove",94,20,c5,d7),
	HX_("__onGamepadButtonDown",36,0c,ab,f5),
	HX_("__onGamepadButtonUp",2f,1d,03,a4),
	HX_("__onGamepadConnect",e8,e9,67,58),
	HX_("__onGamepadDisconnect",1e,09,8b,b2),
	::String(null())
};

void GameInput_obj::__register()
{
	GameInput_obj _hx_dummy;
	GameInput_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.ui.GameInput",9c,63,63,8d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GameInput_obj::__GetStatic;
	__mClass->mSetStaticField = &GameInput_obj::__SetStatic;
	__mClass->mMarkFunc = GameInput_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GameInput_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GameInput_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GameInput_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GameInput_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameInput_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameInput_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GameInput_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_bf4ee6978d1f0060_67_boot)
HXDLIN(  67)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("addEventListener",cd,0b,64,f1), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c))))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_bf4ee6978d1f0060_72_boot)
HXDLIN(  72)		isSupported = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_bf4ee6978d1f0060_78_boot)
HXDLIN(  78)		numDevices = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_bf4ee6978d1f0060_80_boot)
HXDLIN(  80)		_hx___deviceList = ::Array_obj< ::Dynamic>::__new();
            	}
{
            	HX_STACKFRAME(&_hx_pos_bf4ee6978d1f0060_81_boot)
HXDLIN(  81)		_hx___instances = ::Array_obj< ::Dynamic>::__new(0);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_bf4ee6978d1f0060_83_boot)
HXDLIN(  83)		_hx___devices =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace openfl
} // end namespace ui
