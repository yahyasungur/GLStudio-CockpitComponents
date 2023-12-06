///////////////////////////////////////////////////////////////////////////////
// This file is generated by GL Studio.  DO NOT EDIT.
// To modify, run "glstudio GLStudio-WarningLights.gls", edit, then select Code/Generate All.
// Generated from GLStudio-WarningLights.gls using GL Studio 7.0.0
///////////////////////////////////////////////////////////////////////////////
#ifndef _GLStudio_WarningLightsApp_h_
#define _GLStudio_WarningLightsApp_h_

#include "gls_include.h"
#include "display.h"
#include "display_frame.h"
#include "callback_caller.h"

#include "dynamic_library.h"

// Fonts referenced by design and at run-time
#include "GlsArialRegular12.h"

#include "glpolygon.h"
#include "group.h"
#include "gls_text_box.h"
#include "gls_display_frame.h"


//////////////////// Provides support for creating DLLs ////////////////////////
#if (defined(GLSGEN_EXPORT_GLStudio_WarningLightsClass) || \
     defined(GLSGEN_IMPORT_GLStudio_WarningLightsClass) || \
     defined(GLS_EXPORT_GENERATED) || \
     defined(GLS_IMPORT_GENERATED)) \
     && defined(_MSC_VER) 
#  if defined(GLSGEN_EXPORT_GLStudio_WarningLightsClass) || defined(GLS_EXPORT_GENERATED)
#    define GLSGEN_GLStudio_WarningLightsClass_EXPORT __declspec(dllexport)
#  else
#    define GLSGEN_GLStudio_WarningLightsClass_EXPORT __declspec(dllimport)
#  endif
#else
#  define GLSGEN_GLStudio_WarningLightsClass_EXPORT
#endif
///////////////////////////////////////////////////////////////////////////////

//////////////////// User Code from section: "file GLStudio_WarningLightsApp.h" ////////////

#include "glsutil.h"


///////////////////////////////////////////////////////////////////////////////
namespace disti
{
class GLStudio_WarningLightsClass : public glsDisplayFrame
{
public:
    typedef glsDisplayFrame _BaseClass;

    GLStudio_WarningLightsClass(const char *name,int width,int height);
    GLSGEN_GLStudio_WarningLightsClass_EXPORT void CreateObjects(void);
    void Create(void);
    typedef CallbackMethodCallerTemplate< GLStudio_WarningLightsClass > CallbackMethodCaller;
    // Object creators
    // Textures
    static unsigned char * rgb_data_0[];
    static glsInlineImage image_data_0;

    // Geometry

private:

protected:
    GLPolygon *warningLights;
    Group    *text7Group;
    GLPolygon *carpet7;
    GlsTextBox *text7;
    Group    *text7Group_1;
    GLPolygon *carpet8;
    GlsTextBox *text8;
    Group    *text7Group_2;
    GLPolygon *carpet9;
    GlsTextBox *text9;
    Group    *text7Group_3;
    GLPolygon *carpet1;
    GlsTextBox *text1;
    Group    *text7Group_4;
    GLPolygon *carpet2;
    GlsTextBox *text2;
    Group    *text7Group_5;
    GLPolygon *carpet3;
    GlsTextBox *text3;
    Group    *text7Group_6;
    GLPolygon *carpet4;
    GlsTextBox *text4;
    Group    *text7Group_6_1;
    GLPolygon *carpet10;
    GlsTextBox *text10;
    Group    *text5Group;
    GLPolygon *carpet5;
    GlsTextBox *text5;
    Group    *text7Group_6_3;
    GLPolygon *carpet11;
    GlsTextBox *text11;
    Group    *text7Group_6_4;
    GLPolygon *carpet6;
    GlsTextBox *text6;
    Group    *text7Group_6_5;
    GLPolygon *carpet12;
    GlsTextBox *text12;

public:
//////////////////// User Code from section: "Class Declaration" //////////////

///////////////////////////////////////////////////////////////////////////////
public:
    // Methods
    /** This code is called immediately after creating objects */
    virtual GLSGEN_GLStudio_WarningLightsClass_EXPORT void Initialize ();
    /** This code is called every frame */
    virtual GLSGEN_GLStudio_WarningLightsClass_EXPORT void Calculate (double time);

    /** Get the details of the Cpp Interface
      * The actual interface is exposed in compiled code.
      * \param addToThisList A list to add to and then return.  Creates a new one if NULL.
      * \return A templated list.
      * The caller must call the corresponding free method to
      * safely free the memory.
      */

    virtual GLSGEN_GLStudio_WarningLightsClass_EXPORT  InterfaceListType* GetCppInterfaceDescription(InterfaceListType* addToThisList= NULL );
    virtual GLSGEN_GLStudio_WarningLightsClass_EXPORT  void GetCppInterfaceDescriptionFree(InterfaceListType* array);
};
} //namespace disti

extern disti::GLStudio_WarningLightsClass *gLStudio_WarningLights;


#endif

