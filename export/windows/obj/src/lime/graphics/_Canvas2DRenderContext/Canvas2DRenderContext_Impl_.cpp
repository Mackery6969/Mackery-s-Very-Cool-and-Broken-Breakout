#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics__Canvas2DRenderContext_Canvas2DRenderContext_Impl_
#include <lime/graphics/_Canvas2DRenderContext/Canvas2DRenderContext_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_392bae301ff0283f_34_fromRenderContext,"lime.graphics._Canvas2DRenderContext.Canvas2DRenderContext_Impl_","fromRenderContext",0x4df31afc,"lime.graphics._Canvas2DRenderContext.Canvas2DRenderContext_Impl_.fromRenderContext","lime/graphics/Canvas2DRenderContext.hx",34,0xf4e22259)
namespace lime{
namespace graphics{
namespace _Canvas2DRenderContext{

void Canvas2DRenderContext_Impl__obj::__construct() { }

Dynamic Canvas2DRenderContext_Impl__obj::__CreateEmpty() { return new Canvas2DRenderContext_Impl__obj; }

void *Canvas2DRenderContext_Impl__obj::_hx_vtable = 0;

Dynamic Canvas2DRenderContext_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Canvas2DRenderContext_Impl__obj > _hx_result = new Canvas2DRenderContext_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Canvas2DRenderContext_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4e74f09b;
}

 ::Dynamic Canvas2DRenderContext_Impl__obj::fromRenderContext( ::lime::graphics::RenderContext context){
            	HX_STACKFRAME(&_hx_pos_392bae301ff0283f_34_fromRenderContext)
HXDLIN(  34)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Canvas2DRenderContext_Impl__obj,fromRenderContext,return )


Canvas2DRenderContext_Impl__obj::Canvas2DRenderContext_Impl__obj()
{
}

bool Canvas2DRenderContext_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"fromRenderContext") ) { outValue = fromRenderContext_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Canvas2DRenderContext_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Canvas2DRenderContext_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Canvas2DRenderContext_Impl__obj::__mClass;

static ::String Canvas2DRenderContext_Impl__obj_sStaticFields[] = {
	HX_("fromRenderContext",6f,19,d4,ba),
	::String(null())
};

void Canvas2DRenderContext_Impl__obj::__register()
{
	Canvas2DRenderContext_Impl__obj _hx_dummy;
	Canvas2DRenderContext_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics._Canvas2DRenderContext.Canvas2DRenderContext_Impl_",bb,ca,61,16);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Canvas2DRenderContext_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Canvas2DRenderContext_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Canvas2DRenderContext_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Canvas2DRenderContext_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Canvas2DRenderContext_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace _Canvas2DRenderContext
