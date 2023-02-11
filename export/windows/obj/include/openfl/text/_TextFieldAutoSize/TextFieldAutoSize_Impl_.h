#ifndef INCLUDED_openfl_text__TextFieldAutoSize_TextFieldAutoSize_Impl_
#define INCLUDED_openfl_text__TextFieldAutoSize_TextFieldAutoSize_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,text,_TextFieldAutoSize,TextFieldAutoSize_Impl_)

namespace openfl{
namespace text{
namespace _TextFieldAutoSize{


class HXCPP_CLASS_ATTRIBUTES TextFieldAutoSize_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TextFieldAutoSize_Impl__obj OBJ_;
		TextFieldAutoSize_Impl__obj();

	public:
		enum { _hx_ClassId = 0x0013b09e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.text._TextFieldAutoSize.TextFieldAutoSize_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.text._TextFieldAutoSize.TextFieldAutoSize_Impl_"); }

		inline static ::hx::ObjectPtr< TextFieldAutoSize_Impl__obj > __new() {
			::hx::ObjectPtr< TextFieldAutoSize_Impl__obj > __this = new TextFieldAutoSize_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< TextFieldAutoSize_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			TextFieldAutoSize_Impl__obj *__this = (TextFieldAutoSize_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextFieldAutoSize_Impl__obj), false, "openfl.text._TextFieldAutoSize.TextFieldAutoSize_Impl_"));
			*(void **)__this = TextFieldAutoSize_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextFieldAutoSize_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextFieldAutoSize_Impl_",fd,15,bc,50); }

		static void __boot();
		static  ::Dynamic CENTER;
		static  ::Dynamic LEFT;
		static  ::Dynamic NONE;
		static  ::Dynamic RIGHT;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace text
} // end namespace _TextFieldAutoSize

#endif /* INCLUDED_openfl_text__TextFieldAutoSize_TextFieldAutoSize_Impl_ */ 
