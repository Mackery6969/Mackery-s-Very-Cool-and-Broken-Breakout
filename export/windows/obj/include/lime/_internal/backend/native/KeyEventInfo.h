#ifndef INCLUDED_lime__internal_backend_native_KeyEventInfo
#define INCLUDED_lime__internal_backend_native_KeyEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_cef4a471e9b9c478_760_new)
HX_DECLARE_CLASS4(lime,_internal,backend,native,KeyEventInfo)

namespace lime{
namespace _internal{
namespace backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES KeyEventInfo_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef KeyEventInfo_obj OBJ_;
		KeyEventInfo_obj();

	public:
		enum { _hx_ClassId = 0x0253d569 };

		void __construct( ::Dynamic type,::hx::Null< int >  __o_windowID,::hx::Null< Float >  __o_keyCode,::hx::Null< int >  __o_modifier);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime._internal.backend.native.KeyEventInfo")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime._internal.backend.native.KeyEventInfo"); }

		inline static ::hx::ObjectPtr< KeyEventInfo_obj > __new( ::Dynamic type,::hx::Null< int >  __o_windowID,::hx::Null< Float >  __o_keyCode,::hx::Null< int >  __o_modifier) {
			::hx::ObjectPtr< KeyEventInfo_obj > __this = new KeyEventInfo_obj();
			__this->__construct(type,__o_windowID,__o_keyCode,__o_modifier);
			return __this;
		}

		inline static ::hx::ObjectPtr< KeyEventInfo_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic type,::hx::Null< int >  __o_windowID,::hx::Null< Float >  __o_keyCode,::hx::Null< int >  __o_modifier) {
			KeyEventInfo_obj *__this = (KeyEventInfo_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(KeyEventInfo_obj), false, "lime._internal.backend.native.KeyEventInfo"));
			*(void **)__this = KeyEventInfo_obj::_hx_vtable;
{
            		int windowID = __o_windowID.Default(0);
            		Float keyCode = __o_keyCode.Default(0);
            		int modifier = __o_modifier.Default(0);
            	HX_STACKFRAME(&_hx_pos_cef4a471e9b9c478_760_new)
HXLINE( 761)		( ( ::lime::_internal::backend::native::KeyEventInfo)(__this) )->type = ( (int)(type) );
HXLINE( 762)		( ( ::lime::_internal::backend::native::KeyEventInfo)(__this) )->windowID = windowID;
HXLINE( 763)		( ( ::lime::_internal::backend::native::KeyEventInfo)(__this) )->keyCode = keyCode;
HXLINE( 764)		( ( ::lime::_internal::backend::native::KeyEventInfo)(__this) )->modifier = modifier;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~KeyEventInfo_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("KeyEventInfo",29,38,a3,94); }

		Float keyCode;
		int modifier;
		int type;
		int windowID;
		 ::lime::_internal::backend::native::KeyEventInfo clone();
		::Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native

#endif /* INCLUDED_lime__internal_backend_native_KeyEventInfo */ 
