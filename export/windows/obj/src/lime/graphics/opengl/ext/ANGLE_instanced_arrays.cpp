#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_instanced_arrays
#include <lime/graphics/opengl/ext/ANGLE_instanced_arrays.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b3b5b227d74e9109_7_new,"lime.graphics.opengl.ext.ANGLE_instanced_arrays","new",0x4559516a,"lime.graphics.opengl.ext.ANGLE_instanced_arrays.new","lime/graphics/opengl/ext/ANGLE_instanced_arrays.hx",7,0x2d555864)
HX_LOCAL_STACK_FRAME(_hx_pos_b3b5b227d74e9109_14_drawArraysInstancedANGLE,"lime.graphics.opengl.ext.ANGLE_instanced_arrays","drawArraysInstancedANGLE",0xb2062558,"lime.graphics.opengl.ext.ANGLE_instanced_arrays.drawArraysInstancedANGLE","lime/graphics/opengl/ext/ANGLE_instanced_arrays.hx",14,0x2d555864)
HX_LOCAL_STACK_FRAME(_hx_pos_b3b5b227d74e9109_16_drawElementsInstancedANGLE,"lime.graphics.opengl.ext.ANGLE_instanced_arrays","drawElementsInstancedANGLE",0x203b0e15,"lime.graphics.opengl.ext.ANGLE_instanced_arrays.drawElementsInstancedANGLE","lime/graphics/opengl/ext/ANGLE_instanced_arrays.hx",16,0x2d555864)
HX_LOCAL_STACK_FRAME(_hx_pos_b3b5b227d74e9109_18_vertexAttribDivisorANGLE,"lime.graphics.opengl.ext.ANGLE_instanced_arrays","vertexAttribDivisorANGLE",0x66bdeb39,"lime.graphics.opengl.ext.ANGLE_instanced_arrays.vertexAttribDivisorANGLE","lime/graphics/opengl/ext/ANGLE_instanced_arrays.hx",18,0x2d555864)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void ANGLE_instanced_arrays_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b3b5b227d74e9109_7_new)
HXDLIN(   7)		this->VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE = 35070;
            	}

Dynamic ANGLE_instanced_arrays_obj::__CreateEmpty() { return new ANGLE_instanced_arrays_obj; }

void *ANGLE_instanced_arrays_obj::_hx_vtable = 0;

Dynamic ANGLE_instanced_arrays_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ANGLE_instanced_arrays_obj > _hx_result = new ANGLE_instanced_arrays_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ANGLE_instanced_arrays_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0146a7c8;
}

void ANGLE_instanced_arrays_obj::drawArraysInstancedANGLE(int mode,int first,int count,int primcount){
            	HX_STACKFRAME(&_hx_pos_b3b5b227d74e9109_14_drawArraysInstancedANGLE)
            	}


HX_DEFINE_DYNAMIC_FUNC4(ANGLE_instanced_arrays_obj,drawArraysInstancedANGLE,(void))

void ANGLE_instanced_arrays_obj::drawElementsInstancedANGLE(int mode,int count,int type,int offset,int primcount){
            	HX_STACKFRAME(&_hx_pos_b3b5b227d74e9109_16_drawElementsInstancedANGLE)
            	}


HX_DEFINE_DYNAMIC_FUNC5(ANGLE_instanced_arrays_obj,drawElementsInstancedANGLE,(void))

void ANGLE_instanced_arrays_obj::vertexAttribDivisorANGLE(int index,int divisor){
            	HX_STACKFRAME(&_hx_pos_b3b5b227d74e9109_18_vertexAttribDivisorANGLE)
            	}


HX_DEFINE_DYNAMIC_FUNC2(ANGLE_instanced_arrays_obj,vertexAttribDivisorANGLE,(void))


ANGLE_instanced_arrays_obj::ANGLE_instanced_arrays_obj()
{
}

::hx::Val ANGLE_instanced_arrays_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 24:
		if (HX_FIELD_EQ(inName,"drawArraysInstancedANGLE") ) { return ::hx::Val( drawArraysInstancedANGLE_dyn() ); }
		if (HX_FIELD_EQ(inName,"vertexAttribDivisorANGLE") ) { return ::hx::Val( vertexAttribDivisorANGLE_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"drawElementsInstancedANGLE") ) { return ::hx::Val( drawElementsInstancedANGLE_dyn() ); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE") ) { return ::hx::Val( VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ANGLE_instanced_arrays_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 33:
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE") ) { VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ANGLE_instanced_arrays_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE",b2,5f,a5,51));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ANGLE_instanced_arrays_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ANGLE_instanced_arrays_obj,VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE),HX_("VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE",b2,5f,a5,51)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ANGLE_instanced_arrays_obj_sStaticStorageInfo = 0;
#endif

static ::String ANGLE_instanced_arrays_obj_sMemberFields[] = {
	HX_("VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE",b2,5f,a5,51),
	HX_("drawArraysInstancedANGLE",a2,5e,a2,84),
	HX_("drawElementsInstancedANGLE",df,ad,4f,fd),
	HX_("vertexAttribDivisorANGLE",83,24,5a,39),
	::String(null()) };

::hx::Class ANGLE_instanced_arrays_obj::__mClass;

void ANGLE_instanced_arrays_obj::__register()
{
	ANGLE_instanced_arrays_obj _hx_dummy;
	ANGLE_instanced_arrays_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.ANGLE_instanced_arrays",78,14,ee,7b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ANGLE_instanced_arrays_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ANGLE_instanced_arrays_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ANGLE_instanced_arrays_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ANGLE_instanced_arrays_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext