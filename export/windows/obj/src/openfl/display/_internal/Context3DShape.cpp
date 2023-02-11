#include <hxcpp.h>

#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DGraphics
#include <openfl/display/_internal/Context3DGraphics.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DMaskShader
#include <openfl/display/_internal/Context3DMaskShader.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DShape
#include <openfl/display/_internal/Context3DShape.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_06b4bf51740b9656_27_render,"openfl.display._internal.Context3DShape","render",0xa7f4c507,"openfl.display._internal.Context3DShape.render","openfl/display/_internal/Context3DShape.hx",27,0x4e47a55e)
HX_LOCAL_STACK_FRAME(_hx_pos_06b4bf51740b9656_82_renderMask,"openfl.display._internal.Context3DShape","renderMask",0xdd38c193,"openfl.display._internal.Context3DShape.renderMask","openfl/display/_internal/Context3DShape.hx",82,0x4e47a55e)
HX_LOCAL_STACK_FRAME(_hx_pos_06b4bf51740b9656_24_boot,"openfl.display._internal.Context3DShape","boot",0x1b645fa3,"openfl.display._internal.Context3DShape.boot","openfl/display/_internal/Context3DShape.hx",24,0x4e47a55e)
namespace openfl{
namespace display{
namespace _internal{

void Context3DShape_obj::__construct() { }

Dynamic Context3DShape_obj::__CreateEmpty() { return new Context3DShape_obj; }

void *Context3DShape_obj::_hx_vtable = 0;

Dynamic Context3DShape_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Context3DShape_obj > _hx_result = new Context3DShape_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DShape_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x20f2636b;
}

void Context3DShape_obj::render( ::openfl::display::DisplayObject shape, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_06b4bf51740b9656_27_render)
HXLINE(  28)		bool _hx_tmp;
HXDLIN(  28)		if (shape->_hx___renderable) {
HXLINE(  28)			_hx_tmp = (shape->_hx___worldAlpha <= 0);
            		}
            		else {
HXLINE(  28)			_hx_tmp = true;
            		}
HXDLIN(  28)		if (_hx_tmp) {
HXLINE(  28)			return;
            		}
HXLINE(  30)		 ::openfl::display::Graphics graphics = shape->_hx___graphics;
HXLINE(  32)		if (::hx::IsNotNull( graphics )) {
HXLINE(  34)			renderer->_hx___setBlendMode(shape->_hx___worldBlendMode);
HXLINE(  35)			renderer->_hx___pushMaskObject(shape,null());
HXLINE(  38)			::openfl::display::_internal::Context3DGraphics_obj::render(graphics,renderer);
HXLINE(  40)			bool _hx_tmp;
HXDLIN(  40)			if (::hx::IsNotNull( graphics->_hx___bitmap )) {
HXLINE(  40)				_hx_tmp = graphics->_hx___visible;
            			}
            			else {
HXLINE(  40)				_hx_tmp = false;
            			}
HXDLIN(  40)			if (_hx_tmp) {
HXLINE(  42)				 ::openfl::display3D::Context3D context = renderer->_hx___context3D;
HXLINE(  43)				 ::openfl::geom::Rectangle scale9Grid = shape->_hx___worldScale9Grid;
HXLINE(  45)				 ::openfl::display::Shader shader = renderer->_hx___initDisplayShader(shape->_hx___worldShader);
HXLINE(  46)				renderer->setShader(shader);
HXLINE(  47)				renderer->applyBitmapData(graphics->_hx___bitmap,true,null());
HXLINE(  49)				 ::openfl::geom::Matrix matrix = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE(  50)				matrix->scale((( (Float)(1) ) / graphics->_hx___bitmapScale),(( (Float)(1) ) / graphics->_hx___bitmapScale));
HXLINE(  51)				matrix->concat(graphics->_hx___worldTransform);
HXLINE(  53)				renderer->applyMatrix(renderer->_hx___getMatrix(matrix,1));
HXLINE(  55)				::openfl::geom::Matrix_obj::_hx___pool->release(matrix);
HXLINE(  57)				renderer->applyAlpha(shape->_hx___worldAlpha);
HXLINE(  58)				renderer->applyColorTransform(shape->_hx___worldColorTransform);
HXLINE(  59)				renderer->updateShader();
HXLINE(  63)				 ::openfl::display3D::VertexBuffer3D vertexBuffer = graphics->_hx___bitmap->getVertexBuffer(context,null(),null());
HXLINE(  64)				if (::hx::IsNotNull( shader->_hx___position )) {
HXLINE(  64)					context->setVertexBufferAt(( (int)(shader->_hx___position->index) ),vertexBuffer,0,3);
            				}
HXLINE(  65)				if (::hx::IsNotNull( shader->_hx___textureCoord )) {
HXLINE(  65)					context->setVertexBufferAt(( (int)(shader->_hx___textureCoord->index) ),vertexBuffer,3,2);
            				}
HXLINE(  66)				 ::openfl::display3D::IndexBuffer3D indexBuffer = graphics->_hx___bitmap->getIndexBuffer(context,null());
HXLINE(  67)				context->drawTriangles(indexBuffer,null(),null());
HXLINE(  73)				renderer->_hx___clearShader();
            			}
HXLINE(  77)			renderer->_hx___popMaskObject(shape,null());
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DShape_obj,render,(void))

void Context3DShape_obj::renderMask( ::openfl::display::DisplayObject shape, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_06b4bf51740b9656_82_renderMask)
HXLINE(  83)		 ::openfl::display::Graphics graphics = shape->_hx___graphics;
HXLINE(  85)		if (::hx::IsNotNull( graphics )) {
HXLINE(  89)			::openfl::display::_internal::Context3DGraphics_obj::renderMask(graphics,renderer);
HXLINE(  91)			if (::hx::IsNotNull( graphics->_hx___bitmap )) {
HXLINE(  93)				 ::openfl::display3D::Context3D context = renderer->_hx___context3D;
HXLINE(  95)				 ::openfl::display::_internal::Context3DMaskShader shader = renderer->_hx___maskShader;
HXLINE(  96)				renderer->setShader(shader);
HXLINE(  97)				renderer->applyBitmapData(graphics->_hx___bitmap,true,null());
HXLINE(  98)				renderer->applyMatrix(renderer->_hx___getMatrix(graphics->_hx___worldTransform,1));
HXLINE(  99)				renderer->updateShader();
HXLINE( 101)				 ::openfl::display3D::VertexBuffer3D vertexBuffer = graphics->_hx___bitmap->getVertexBuffer(context,null(),null());
HXLINE( 102)				if (::hx::IsNotNull( shader->_hx___position )) {
HXLINE( 102)					context->setVertexBufferAt(( (int)(shader->_hx___position->index) ),vertexBuffer,0,3);
            				}
HXLINE( 103)				if (::hx::IsNotNull( shader->_hx___textureCoord )) {
HXLINE( 103)					context->setVertexBufferAt(( (int)(shader->_hx___textureCoord->index) ),vertexBuffer,3,2);
            				}
HXLINE( 104)				 ::openfl::display3D::IndexBuffer3D indexBuffer = graphics->_hx___bitmap->getIndexBuffer(context,null());
HXLINE( 105)				context->drawTriangles(indexBuffer,null(),null());
HXLINE( 111)				renderer->_hx___clearShader();
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DShape_obj,renderMask,(void))


Context3DShape_obj::Context3DShape_obj()
{
}

bool Context3DShape_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderMask") ) { outValue = renderMask_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Context3DShape_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Context3DShape_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Context3DShape_obj::__mClass;

static ::String Context3DShape_obj_sStaticFields[] = {
	HX_("render",56,6b,29,05),
	HX_("renderMask",62,3b,60,e5),
	::String(null())
};

void Context3DShape_obj::__register()
{
	Context3DShape_obj _hx_dummy;
	Context3DShape_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.Context3DShape",9d,3a,3b,45);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DShape_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Context3DShape_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Context3DShape_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DShape_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DShape_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DShape_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_06b4bf51740b9656_24_boot)
HXDLIN(  24)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
