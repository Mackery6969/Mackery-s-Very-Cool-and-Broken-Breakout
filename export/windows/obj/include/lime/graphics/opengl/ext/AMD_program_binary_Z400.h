#ifndef INCLUDED_lime_graphics_opengl_ext_AMD_program_binary_Z400
#define INCLUDED_lime_graphics_opengl_ext_AMD_program_binary_Z400

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_67064d08ae812aee_6_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,AMD_program_binary_Z400)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES AMD_program_binary_Z400_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AMD_program_binary_Z400_obj OBJ_;
		AMD_program_binary_Z400_obj();

	public:
		enum { _hx_ClassId = 0x1233b268 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.AMD_program_binary_Z400")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.AMD_program_binary_Z400"); }

		inline static ::hx::ObjectPtr< AMD_program_binary_Z400_obj > __new() {
			::hx::ObjectPtr< AMD_program_binary_Z400_obj > __this = new AMD_program_binary_Z400_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AMD_program_binary_Z400_obj > __alloc(::hx::Ctx *_hx_ctx) {
			AMD_program_binary_Z400_obj *__this = (AMD_program_binary_Z400_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AMD_program_binary_Z400_obj), false, "lime.graphics.opengl.ext.AMD_program_binary_Z400"));
			*(void **)__this = AMD_program_binary_Z400_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_67064d08ae812aee_6_new)
HXDLIN(   6)		( ( ::lime::graphics::opengl::ext::AMD_program_binary_Z400)(__this) )->Z400_BINARY_AMD = 34624;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AMD_program_binary_Z400_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AMD_program_binary_Z400",b6,66,58,28); }

		int Z400_BINARY_AMD;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_AMD_program_binary_Z400 */ 
