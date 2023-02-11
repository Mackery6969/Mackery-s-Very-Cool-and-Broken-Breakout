#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_system_FlxBGSprite
#include <flixel/system/FlxBGSprite.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4f421a3440b44d31_11_new,"flixel.FlxSubState","new",0xef991343,"flixel.FlxSubState.new","flixel/FlxSubState.hx",11,0xd8a3e54e)
HX_LOCAL_STACK_FRAME(_hx_pos_4f421a3440b44d31_58_draw,"flixel.FlxSubState","draw",0xafc56fc1,"flixel.FlxSubState.draw","flixel/FlxSubState.hx",58,0xd8a3e54e)
HX_LOCAL_STACK_FRAME(_hx_pos_4f421a3440b44d31_77_destroy,"flixel.FlxSubState","destroy",0xc08a1d5d,"flixel.FlxSubState.destroy","flixel/FlxSubState.hx",77,0xd8a3e54e)
HX_LOCAL_STACK_FRAME(_hx_pos_4f421a3440b44d31_90_close,"flixel.FlxSubState","close",0x85a9195b,"flixel.FlxSubState.close","flixel/FlxSubState.hx",90,0xd8a3e54e)
HX_LOCAL_STACK_FRAME(_hx_pos_4f421a3440b44d31_97_get_bgColor,"flixel.FlxSubState","get_bgColor",0x02e53f58,"flixel.FlxSubState.get_bgColor","flixel/FlxSubState.hx",97,0xd8a3e54e)
HX_LOCAL_STACK_FRAME(_hx_pos_4f421a3440b44d31_102_set_bgColor,"flixel.FlxSubState","set_bgColor",0x0d524664,"flixel.FlxSubState.set_bgColor","flixel/FlxSubState.hx",102,0xd8a3e54e)
namespace flixel{

void FlxSubState_obj::__construct(::hx::Null< int >  __o_BGColor){
            		int BGColor = __o_BGColor.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_4f421a3440b44d31_11_new)
HXLINE(  41)		this->_created = false;
HXLINE(  48)		super::__construct(null());
HXLINE(  49)		this->closeCallback = null();
HXLINE(  50)		this->openCallback = null();
HXLINE(  52)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(  53)			this->_bgSprite =  ::flixel::_hx_system::FlxBGSprite_obj::__alloc( HX_CTX );
            		}
HXLINE(  54)		this->set_bgColor(BGColor);
            	}

Dynamic FlxSubState_obj::__CreateEmpty() { return new FlxSubState_obj; }

void *FlxSubState_obj::_hx_vtable = 0;

Dynamic FlxSubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxSubState_obj > _hx_result = new FlxSubState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxSubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x5661ffbf;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void FlxSubState_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_4f421a3440b44d31_58_draw)
HXLINE(  60)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE(  62)			int _g = 0;
HXDLIN(  62)			::Array< ::Dynamic> _g1 = this->get_cameras();
HXDLIN(  62)			while((_g < _g1->length)){
HXLINE(  62)				 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN(  62)				_g = (_g + 1);
HXLINE(  64)				camera->fill(this->_bgColor,null(),null(),null());
            			}
            		}
            		else {
HXLINE(  69)			this->_bgSprite->draw();
            		}
HXLINE(  73)		this->super::draw();
            	}


void FlxSubState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_4f421a3440b44d31_77_destroy)
HXLINE(  78)		this->super::destroy();
HXLINE(  79)		this->closeCallback = null();
HXLINE(  80)		this->openCallback = null();
HXLINE(  81)		this->_parentState = null();
HXLINE(  82)		this->_bgSprite = null();
            	}


void FlxSubState_obj::close(){
            	HX_STACKFRAME(&_hx_pos_4f421a3440b44d31_90_close)
HXDLIN(  90)		bool _hx_tmp;
HXDLIN(  90)		if (::hx::IsNotNull( this->_parentState )) {
HXDLIN(  90)			_hx_tmp = ::hx::IsInstanceEq( this->_parentState->subState,::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXDLIN(  90)			_hx_tmp = false;
            		}
HXDLIN(  90)		if (_hx_tmp) {
HXLINE(  91)			this->_parentState->closeSubState();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSubState_obj,close,(void))

int FlxSubState_obj::get_bgColor(){
            	HX_STACKFRAME(&_hx_pos_4f421a3440b44d31_97_get_bgColor)
HXDLIN(  97)		return this->_bgColor;
            	}


int FlxSubState_obj::set_bgColor(int Value){
            	HX_STACKFRAME(&_hx_pos_4f421a3440b44d31_102_set_bgColor)
HXLINE( 103)		bool _hx_tmp;
HXDLIN( 103)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 103)			_hx_tmp = ::hx::IsNotNull( this->_bgSprite );
            		}
            		else {
HXLINE( 103)			_hx_tmp = false;
            		}
HXDLIN( 103)		if (_hx_tmp) {
HXLINE( 104)			this->_bgSprite->get_pixels()->setPixel32(0,0,Value);
            		}
HXLINE( 106)		return (this->_bgColor = Value);
            	}



::hx::ObjectPtr< FlxSubState_obj > FlxSubState_obj::__new(::hx::Null< int >  __o_BGColor) {
	::hx::ObjectPtr< FlxSubState_obj > __this = new FlxSubState_obj();
	__this->__construct(__o_BGColor);
	return __this;
}

::hx::ObjectPtr< FlxSubState_obj > FlxSubState_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_BGColor) {
	FlxSubState_obj *__this = (FlxSubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxSubState_obj), true, "flixel.FlxSubState"));
	*(void **)__this = FlxSubState_obj::_hx_vtable;
	__this->__construct(__o_BGColor);
	return __this;
}

FlxSubState_obj::FlxSubState_obj()
{
}

void FlxSubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSubState);
	HX_MARK_MEMBER_NAME(openCallback,"openCallback");
	HX_MARK_MEMBER_NAME(closeCallback,"closeCallback");
	HX_MARK_MEMBER_NAME(_bgSprite,"_bgSprite");
	HX_MARK_MEMBER_NAME(_parentState,"_parentState");
	HX_MARK_MEMBER_NAME(_bgColor,"_bgColor");
	HX_MARK_MEMBER_NAME(_created,"_created");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(openCallback,"openCallback");
	HX_VISIT_MEMBER_NAME(closeCallback,"closeCallback");
	HX_VISIT_MEMBER_NAME(_bgSprite,"_bgSprite");
	HX_VISIT_MEMBER_NAME(_parentState,"_parentState");
	HX_VISIT_MEMBER_NAME(_bgColor,"_bgColor");
	HX_VISIT_MEMBER_NAME(_created,"_created");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxSubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_bgColor") ) { return ::hx::Val( _bgColor ); }
		if (HX_FIELD_EQ(inName,"_created") ) { return ::hx::Val( _created ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_bgSprite") ) { return ::hx::Val( _bgSprite ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_bgColor") ) { return ::hx::Val( get_bgColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bgColor") ) { return ::hx::Val( set_bgColor_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"openCallback") ) { return ::hx::Val( openCallback ); }
		if (HX_FIELD_EQ(inName,"_parentState") ) { return ::hx::Val( _parentState ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"closeCallback") ) { return ::hx::Val( closeCallback ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxSubState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_bgColor") ) { _bgColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_created") ) { _created=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_bgSprite") ) { _bgSprite=inValue.Cast<  ::flixel::_hx_system::FlxBGSprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"openCallback") ) { openCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_parentState") ) { _parentState=inValue.Cast<  ::flixel::FlxState >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"closeCallback") ) { closeCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_bgSprite",09,bf,32,e0));
	outFields->push(HX_("_parentState",88,96,cf,7a));
	outFields->push(HX_("_bgColor",df,da,3b,31));
	outFields->push(HX_("_created",69,0f,23,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxSubState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxSubState_obj,openCallback),HX_("openCallback",af,33,24,bd)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxSubState_obj,closeCallback),HX_("closeCallback",9d,e5,0d,8a)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxBGSprite */ ,(int)offsetof(FlxSubState_obj,_bgSprite),HX_("_bgSprite",09,bf,32,e0)},
	{::hx::fsObject /*  ::flixel::FlxState */ ,(int)offsetof(FlxSubState_obj,_parentState),HX_("_parentState",88,96,cf,7a)},
	{::hx::fsInt,(int)offsetof(FlxSubState_obj,_bgColor),HX_("_bgColor",df,da,3b,31)},
	{::hx::fsBool,(int)offsetof(FlxSubState_obj,_created),HX_("_created",69,0f,23,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxSubState_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxSubState_obj_sMemberFields[] = {
	HX_("openCallback",af,33,24,bd),
	HX_("closeCallback",9d,e5,0d,8a),
	HX_("_bgSprite",09,bf,32,e0),
	HX_("_parentState",88,96,cf,7a),
	HX_("_bgColor",df,da,3b,31),
	HX_("_created",69,0f,23,4b),
	HX_("draw",04,2c,70,42),
	HX_("destroy",fa,2c,86,24),
	HX_("close",b8,17,63,48),
	HX_("get_bgColor",75,e1,7d,7d),
	HX_("set_bgColor",81,e8,ea,87),
	::String(null()) };

::hx::Class FlxSubState_obj::__mClass;

void FlxSubState_obj::__register()
{
	FlxSubState_obj _hx_dummy;
	FlxSubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.FlxSubState",d1,b5,9f,37);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxSubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxSubState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
