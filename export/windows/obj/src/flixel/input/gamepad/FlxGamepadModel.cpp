#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadModel
#include <flixel/input/gamepad/FlxGamepadModel.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{

::flixel::input::gamepad::FlxGamepadModel FlxGamepadModel_obj::LOGITECH;

::flixel::input::gamepad::FlxGamepadModel FlxGamepadModel_obj::MAYFLASH_WII_REMOTE;

::flixel::input::gamepad::FlxGamepadModel FlxGamepadModel_obj::MFI;

::flixel::input::gamepad::FlxGamepadModel FlxGamepadModel_obj::OUYA;

::flixel::input::gamepad::FlxGamepadModel FlxGamepadModel_obj::PS4;

::flixel::input::gamepad::FlxGamepadModel FlxGamepadModel_obj::PSVITA;

::flixel::input::gamepad::FlxGamepadModel FlxGamepadModel_obj::SWITCH_JOYCON_LEFT;

::flixel::input::gamepad::FlxGamepadModel FlxGamepadModel_obj::SWITCH_JOYCON_RIGHT;

::flixel::input::gamepad::FlxGamepadModel FlxGamepadModel_obj::SWITCH_PRO;

::flixel::input::gamepad::FlxGamepadModel FlxGamepadModel_obj::UNKNOWN;

::flixel::input::gamepad::FlxGamepadModel FlxGamepadModel_obj::WII_REMOTE;

::flixel::input::gamepad::FlxGamepadModel FlxGamepadModel_obj::XINPUT;

bool FlxGamepadModel_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("LOGITECH",3b,00,6b,73)) { outValue = FlxGamepadModel_obj::LOGITECH; return true; }
	if (inName==HX_("MAYFLASH_WII_REMOTE",22,7b,c7,b9)) { outValue = FlxGamepadModel_obj::MAYFLASH_WII_REMOTE; return true; }
	if (inName==HX_("MFI",d0,aa,3a,00)) { outValue = FlxGamepadModel_obj::MFI; return true; }
	if (inName==HX_("OUYA",6e,a8,78,34)) { outValue = FlxGamepadModel_obj::OUYA; return true; }
	if (inName==HX_("PS4",d1,fc,3c,00)) { outValue = FlxGamepadModel_obj::PS4; return true; }
	if (inName==HX_("PSVITA",e3,0a,df,ff)) { outValue = FlxGamepadModel_obj::PSVITA; return true; }
	if (inName==HX_("SWITCH_JOYCON_LEFT",6d,d6,f7,ed)) { outValue = FlxGamepadModel_obj::SWITCH_JOYCON_LEFT; return true; }
	if (inName==HX_("SWITCH_JOYCON_RIGHT",96,d6,f0,c1)) { outValue = FlxGamepadModel_obj::SWITCH_JOYCON_RIGHT; return true; }
	if (inName==HX_("SWITCH_PRO",02,41,68,7a)) { outValue = FlxGamepadModel_obj::SWITCH_PRO; return true; }
	if (inName==HX_("UNKNOWN",6a,f7,4e,61)) { outValue = FlxGamepadModel_obj::UNKNOWN; return true; }
	if (inName==HX_("WII_REMOTE",0e,91,0a,f5)) { outValue = FlxGamepadModel_obj::WII_REMOTE; return true; }
	if (inName==HX_("XINPUT",92,bc,73,6b)) { outValue = FlxGamepadModel_obj::XINPUT; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxGamepadModel_obj)

int FlxGamepadModel_obj::__FindIndex(::String inName)
{
	if (inName==HX_("LOGITECH",3b,00,6b,73)) return 0;
	if (inName==HX_("MAYFLASH_WII_REMOTE",22,7b,c7,b9)) return 5;
	if (inName==HX_("MFI",d0,aa,3a,00)) return 7;
	if (inName==HX_("OUYA",6e,a8,78,34)) return 1;
	if (inName==HX_("PS4",d1,fc,3c,00)) return 2;
	if (inName==HX_("PSVITA",e3,0a,df,ff)) return 3;
	if (inName==HX_("SWITCH_JOYCON_LEFT",6d,d6,f7,ed)) return 9;
	if (inName==HX_("SWITCH_JOYCON_RIGHT",96,d6,f0,c1)) return 10;
	if (inName==HX_("SWITCH_PRO",02,41,68,7a)) return 8;
	if (inName==HX_("UNKNOWN",6a,f7,4e,61)) return 11;
	if (inName==HX_("WII_REMOTE",0e,91,0a,f5)) return 6;
	if (inName==HX_("XINPUT",92,bc,73,6b)) return 4;
	return super::__FindIndex(inName);
}

int FlxGamepadModel_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("LOGITECH",3b,00,6b,73)) return 0;
	if (inName==HX_("MAYFLASH_WII_REMOTE",22,7b,c7,b9)) return 0;
	if (inName==HX_("MFI",d0,aa,3a,00)) return 0;
	if (inName==HX_("OUYA",6e,a8,78,34)) return 0;
	if (inName==HX_("PS4",d1,fc,3c,00)) return 0;
	if (inName==HX_("PSVITA",e3,0a,df,ff)) return 0;
	if (inName==HX_("SWITCH_JOYCON_LEFT",6d,d6,f7,ed)) return 0;
	if (inName==HX_("SWITCH_JOYCON_RIGHT",96,d6,f0,c1)) return 0;
	if (inName==HX_("SWITCH_PRO",02,41,68,7a)) return 0;
	if (inName==HX_("UNKNOWN",6a,f7,4e,61)) return 0;
	if (inName==HX_("WII_REMOTE",0e,91,0a,f5)) return 0;
	if (inName==HX_("XINPUT",92,bc,73,6b)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val FlxGamepadModel_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("LOGITECH",3b,00,6b,73)) return LOGITECH;
	if (inName==HX_("MAYFLASH_WII_REMOTE",22,7b,c7,b9)) return MAYFLASH_WII_REMOTE;
	if (inName==HX_("MFI",d0,aa,3a,00)) return MFI;
	if (inName==HX_("OUYA",6e,a8,78,34)) return OUYA;
	if (inName==HX_("PS4",d1,fc,3c,00)) return PS4;
	if (inName==HX_("PSVITA",e3,0a,df,ff)) return PSVITA;
	if (inName==HX_("SWITCH_JOYCON_LEFT",6d,d6,f7,ed)) return SWITCH_JOYCON_LEFT;
	if (inName==HX_("SWITCH_JOYCON_RIGHT",96,d6,f0,c1)) return SWITCH_JOYCON_RIGHT;
	if (inName==HX_("SWITCH_PRO",02,41,68,7a)) return SWITCH_PRO;
	if (inName==HX_("UNKNOWN",6a,f7,4e,61)) return UNKNOWN;
	if (inName==HX_("WII_REMOTE",0e,91,0a,f5)) return WII_REMOTE;
	if (inName==HX_("XINPUT",92,bc,73,6b)) return XINPUT;
	return super::__Field(inName,inCallProp);
}

static ::String FlxGamepadModel_obj_sStaticFields[] = {
	HX_("LOGITECH",3b,00,6b,73),
	HX_("OUYA",6e,a8,78,34),
	HX_("PS4",d1,fc,3c,00),
	HX_("PSVITA",e3,0a,df,ff),
	HX_("XINPUT",92,bc,73,6b),
	HX_("MAYFLASH_WII_REMOTE",22,7b,c7,b9),
	HX_("WII_REMOTE",0e,91,0a,f5),
	HX_("MFI",d0,aa,3a,00),
	HX_("SWITCH_PRO",02,41,68,7a),
	HX_("SWITCH_JOYCON_LEFT",6d,d6,f7,ed),
	HX_("SWITCH_JOYCON_RIGHT",96,d6,f0,c1),
	HX_("UNKNOWN",6a,f7,4e,61),
	::String(null())
};

::hx::Class FlxGamepadModel_obj::__mClass;

Dynamic __Create_FlxGamepadModel_obj() { return new FlxGamepadModel_obj; }

void FlxGamepadModel_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.input.gamepad.FlxGamepadModel",f7,d6,4b,41), ::hx::TCanCast< FlxGamepadModel_obj >,FlxGamepadModel_obj_sStaticFields,0,
	&__Create_FlxGamepadModel_obj, &__Create,
	&super::__SGetClass(), &CreateFlxGamepadModel_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxGamepadModel_obj::__GetStatic;
}

void FlxGamepadModel_obj::__boot()
{
LOGITECH = ::hx::CreateConstEnum< FlxGamepadModel_obj >(HX_("LOGITECH",3b,00,6b,73),0);
MAYFLASH_WII_REMOTE = ::hx::CreateConstEnum< FlxGamepadModel_obj >(HX_("MAYFLASH_WII_REMOTE",22,7b,c7,b9),5);
MFI = ::hx::CreateConstEnum< FlxGamepadModel_obj >(HX_("MFI",d0,aa,3a,00),7);
OUYA = ::hx::CreateConstEnum< FlxGamepadModel_obj >(HX_("OUYA",6e,a8,78,34),1);
PS4 = ::hx::CreateConstEnum< FlxGamepadModel_obj >(HX_("PS4",d1,fc,3c,00),2);
PSVITA = ::hx::CreateConstEnum< FlxGamepadModel_obj >(HX_("PSVITA",e3,0a,df,ff),3);
SWITCH_JOYCON_LEFT = ::hx::CreateConstEnum< FlxGamepadModel_obj >(HX_("SWITCH_JOYCON_LEFT",6d,d6,f7,ed),9);
SWITCH_JOYCON_RIGHT = ::hx::CreateConstEnum< FlxGamepadModel_obj >(HX_("SWITCH_JOYCON_RIGHT",96,d6,f0,c1),10);
SWITCH_PRO = ::hx::CreateConstEnum< FlxGamepadModel_obj >(HX_("SWITCH_PRO",02,41,68,7a),8);
UNKNOWN = ::hx::CreateConstEnum< FlxGamepadModel_obj >(HX_("UNKNOWN",6a,f7,4e,61),11);
WII_REMOTE = ::hx::CreateConstEnum< FlxGamepadModel_obj >(HX_("WII_REMOTE",0e,91,0a,f5),6);
XINPUT = ::hx::CreateConstEnum< FlxGamepadModel_obj >(HX_("XINPUT",92,bc,73,6b),4);
}


} // end namespace flixel
} // end namespace input
} // end namespace gamepad
