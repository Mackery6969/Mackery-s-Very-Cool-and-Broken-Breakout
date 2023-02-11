#ifndef INCLUDED_openfl_display_Window
#define INCLUDED_openfl_display_Window

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS2(lime,ui,Window)
HX_DECLARE_CLASS2(openfl,display,Window)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES Window_obj : public  ::lime::ui::Window_obj
{
	public:
		typedef  ::lime::ui::Window_obj super;
		typedef Window_obj OBJ_;
		Window_obj();

	public:
		enum { _hx_ClassId = 0x201c771e };

		void __construct( ::lime::app::Application application, ::Dynamic attributes);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.Window")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display.Window"); }
		static ::hx::ObjectPtr< Window_obj > __new( ::lime::app::Application application, ::Dynamic attributes);
		static ::hx::ObjectPtr< Window_obj > __alloc(::hx::Ctx *_hx_ctx, ::lime::app::Application application, ::Dynamic attributes);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Window_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Window",10,08,21,87); }

		static void __boot();
		static  ::Dynamic __meta__;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_Window */ 
