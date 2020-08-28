/*
 * Interface wrapper code.
 *
 * Generated by SIP 5.3.0
 *
 * Copyright (c) 2019 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt5.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtWidgets.h"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOption.cpp"

#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOption.cpp"
#line 26 "sip/QtGui/qfontmetrics.sip"
#include <qfontmetrics.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOption.cpp"
#line 26 "sip/QtGui/qpalette.sip"
#include <qpalette.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOption.cpp"
#line 26 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 42 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOption.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qstyle.sip"
#include <qstyle.h>
#line 45 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOption.cpp"
#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 48 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOption.cpp"
#line 28 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 51 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOption.cpp"


PyDoc_STRVAR(doc_QStyleOption_initFrom, "initFrom(self, QWidget)");

extern "C" {static PyObject *meth_QStyleOption_initFrom(PyObject *, PyObject *);}
static PyObject *meth_QStyleOption_initFrom(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QWidget* a0;
         ::QStyleOption *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QStyleOption, &sipCpp, sipType_QWidget, &a0))
        {
            sipCpp->initFrom(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QStyleOption, sipName_initFrom, doc_QStyleOption_initFrom);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOption(void *, int);}
static void release_QStyleOption(void *sipCppV, int)
{
    delete reinterpret_cast< ::QStyleOption *>(sipCppV);
}


extern "C" {static void *array_QStyleOption(Py_ssize_t);}
static void *array_QStyleOption(Py_ssize_t sipNrElem)
{
    return new  ::QStyleOption[sipNrElem];
}


extern "C" {static void assign_QStyleOption(void *, Py_ssize_t, void *);}
static void assign_QStyleOption(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QStyleOption *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QStyleOption *>(sipSrc);
}


extern "C" {static void *copy_QStyleOption(const void *, Py_ssize_t);}
static void *copy_QStyleOption(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QStyleOption(reinterpret_cast<const  ::QStyleOption *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOption(sipSimpleWrapper *);}
static void dealloc_QStyleOption(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QStyleOption(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QStyleOption(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOption(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QStyleOption *sipCpp = SIP_NULLPTR;

    {
        int a0 = QStyleOption::StyleOptionVersion::Version;
        int a1 = QStyleOption::OptionType::SO_Default;

        static const char *sipKwdList[] = {
            sipName_version,
            sipName_type,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|ii", &a0, &a1))
        {
            sipCpp = new  ::QStyleOption(a0,a1);

            return sipCpp;
        }
    }

    {
        const  ::QStyleOption* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QStyleOption, &a0))
        {
            sipCpp = new  ::QStyleOption(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_QStyleOption[] = {
    {sipName_initFrom, meth_QStyleOption_initFrom, METH_VARARGS, doc_QStyleOption_initFrom}
};

static sipEnumMemberDef enummembers_QStyleOption[] = {
    {sipName_SO_Button, static_cast<int>( ::QStyleOption::SO_Button), 313},
    {sipName_SO_ComboBox, static_cast<int>( ::QStyleOption::SO_ComboBox), 313},
    {sipName_SO_Complex, static_cast<int>( ::QStyleOption::SO_Complex), 313},
    {sipName_SO_ComplexCustomBase, static_cast<int>( ::QStyleOption::SO_ComplexCustomBase), 313},
    {sipName_SO_CustomBase, static_cast<int>( ::QStyleOption::SO_CustomBase), 313},
    {sipName_SO_Default, static_cast<int>( ::QStyleOption::SO_Default), 313},
    {sipName_SO_DockWidget, static_cast<int>( ::QStyleOption::SO_DockWidget), 313},
    {sipName_SO_FocusRect, static_cast<int>( ::QStyleOption::SO_FocusRect), 313},
    {sipName_SO_Frame, static_cast<int>( ::QStyleOption::SO_Frame), 313},
    {sipName_SO_GraphicsItem, static_cast<int>( ::QStyleOption::SO_GraphicsItem), 313},
    {sipName_SO_GroupBox, static_cast<int>( ::QStyleOption::SO_GroupBox), 313},
    {sipName_SO_Header, static_cast<int>( ::QStyleOption::SO_Header), 313},
    {sipName_SO_MenuItem, static_cast<int>( ::QStyleOption::SO_MenuItem), 313},
    {sipName_SO_ProgressBar, static_cast<int>( ::QStyleOption::SO_ProgressBar), 313},
    {sipName_SO_RubberBand, static_cast<int>( ::QStyleOption::SO_RubberBand), 313},
    {sipName_SO_SizeGrip, static_cast<int>( ::QStyleOption::SO_SizeGrip), 313},
    {sipName_SO_Slider, static_cast<int>( ::QStyleOption::SO_Slider), 313},
    {sipName_SO_SpinBox, static_cast<int>( ::QStyleOption::SO_SpinBox), 313},
    {sipName_SO_Tab, static_cast<int>( ::QStyleOption::SO_Tab), 313},
    {sipName_SO_TabBarBase, static_cast<int>( ::QStyleOption::SO_TabBarBase), 313},
    {sipName_SO_TabWidgetFrame, static_cast<int>( ::QStyleOption::SO_TabWidgetFrame), 313},
    {sipName_SO_TitleBar, static_cast<int>( ::QStyleOption::SO_TitleBar), 313},
    {sipName_SO_ToolBar, static_cast<int>( ::QStyleOption::SO_ToolBar), 313},
    {sipName_SO_ToolBox, static_cast<int>( ::QStyleOption::SO_ToolBox), 313},
    {sipName_SO_ToolButton, static_cast<int>( ::QStyleOption::SO_ToolButton), 313},
    {sipName_SO_ViewItem, static_cast<int>( ::QStyleOption::SO_ViewItem), 313},
    {sipName_Type, static_cast<int>( ::QStyleOption::Type), 314},
    {sipName_Version, static_cast<int>( ::QStyleOption::Version), 315},
};


extern "C" {static PyObject *varget_QStyleOption_direction(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOption_direction(void *sipSelf, PyObject *, PyObject *)
{
     ::Qt::LayoutDirection sipVal;
     ::QStyleOption *sipCpp = reinterpret_cast< ::QStyleOption *>(sipSelf);

    sipVal = sipCpp->direction;

    return sipConvertFromEnum(static_cast<int>(sipVal), sipType_Qt_LayoutDirection);
}


extern "C" {static int varset_QStyleOption_direction(void *, PyObject *, PyObject *);}
static int varset_QStyleOption_direction(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::Qt::LayoutDirection sipVal;
     ::QStyleOption *sipCpp = reinterpret_cast< ::QStyleOption *>(sipSelf);

    sipVal = ( ::Qt::LayoutDirection)sipConvertToEnum(sipPy, sipType_Qt_LayoutDirection);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->direction = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOption_fontMetrics(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOption_fontMetrics(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::QFontMetrics*sipVal;
     ::QStyleOption *sipCpp = reinterpret_cast< ::QStyleOption *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -127);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->fontMetrics;

    sipPy = sipConvertFromType(sipVal, sipType_QFontMetrics, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -23, sipPySelf);
        sipKeepReference(sipPySelf, -127, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_QStyleOption_fontMetrics(void *, PyObject *, PyObject *);}
static int varset_QStyleOption_fontMetrics(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QFontMetrics*sipVal;
     ::QStyleOption *sipCpp = reinterpret_cast< ::QStyleOption *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QFontMetrics *>(sipForceConvertToType(sipPy, sipType_QFontMetrics, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->fontMetrics = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOption_palette(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOption_palette(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::QPalette*sipVal;
     ::QStyleOption *sipCpp = reinterpret_cast< ::QStyleOption *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -128);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->palette;

    sipPy = sipConvertFromType(sipVal, sipType_QPalette, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -24, sipPySelf);
        sipKeepReference(sipPySelf, -128, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_QStyleOption_palette(void *, PyObject *, PyObject *);}
static int varset_QStyleOption_palette(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QPalette*sipVal;
     ::QStyleOption *sipCpp = reinterpret_cast< ::QStyleOption *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QPalette *>(sipForceConvertToType(sipPy, sipType_QPalette, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->palette = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOption_rect(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOption_rect(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::QRect*sipVal;
     ::QStyleOption *sipCpp = reinterpret_cast< ::QStyleOption *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -129);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->rect;

    sipPy = sipConvertFromType(sipVal, sipType_QRect, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -41, sipPySelf);
        sipKeepReference(sipPySelf, -129, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_QStyleOption_rect(void *, PyObject *, PyObject *);}
static int varset_QStyleOption_rect(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QRect*sipVal;
     ::QStyleOption *sipCpp = reinterpret_cast< ::QStyleOption *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QRect *>(sipForceConvertToType(sipPy, sipType_QRect, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->rect = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOption_state(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOption_state(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::QStyle::State*sipVal;
     ::QStyleOption *sipCpp = reinterpret_cast< ::QStyleOption *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -131);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->state;

    sipPy = sipConvertFromType(sipVal, sipType_QStyle_State, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -130, sipPySelf);
        sipKeepReference(sipPySelf, -131, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_QStyleOption_state(void *, PyObject *, PyObject *);}
static int varset_QStyleOption_state(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QStyle::State*sipVal;
     ::QStyleOption *sipCpp = reinterpret_cast< ::QStyleOption *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QStyle::State *>(sipForceConvertToType(sipPy, sipType_QStyle_State, SIP_NULLPTR, SIP_NOT_NONE, &sipValState, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->state = *sipVal;

    sipReleaseType(sipVal, sipType_QStyle_State, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOption_styleObject(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOption_styleObject(void *sipSelf, PyObject *, PyObject *)
{
     ::QObject*sipVal;
     ::QStyleOption *sipCpp = reinterpret_cast< ::QStyleOption *>(sipSelf);

    sipVal = sipCpp->styleObject;

    return sipConvertFromType(sipVal, sipType_QObject, SIP_NULLPTR);
}


extern "C" {static int varset_QStyleOption_styleObject(void *, PyObject *, PyObject *);}
static int varset_QStyleOption_styleObject(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QObject*sipVal;
     ::QStyleOption *sipCpp = reinterpret_cast< ::QStyleOption *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QObject *>(sipForceConvertToType(sipPy, sipType_QObject, SIP_NULLPTR, 0, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->styleObject = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOption_type(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOption_type(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::QStyleOption *sipCpp = reinterpret_cast< ::QStyleOption *>(sipSelf);

    sipVal = sipCpp->type;

    return PyLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOption_type(void *, PyObject *, PyObject *);}
static int varset_QStyleOption_type(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::QStyleOption *sipCpp = reinterpret_cast< ::QStyleOption *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->type = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOption_version(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOption_version(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::QStyleOption *sipCpp = reinterpret_cast< ::QStyleOption *>(sipSelf);

    sipVal = sipCpp->version;

    return PyLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOption_version(void *, PyObject *, PyObject *);}
static int varset_QStyleOption_version(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::QStyleOption *sipCpp = reinterpret_cast< ::QStyleOption *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->version = sipVal;

    return 0;
}

sipVariableDef variables_QStyleOption[] = {
    {InstanceVariable, sipName_direction, (PyMethodDef *)varget_QStyleOption_direction, (PyMethodDef *)varset_QStyleOption_direction, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_fontMetrics, (PyMethodDef *)varget_QStyleOption_fontMetrics, (PyMethodDef *)varset_QStyleOption_fontMetrics, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_palette, (PyMethodDef *)varget_QStyleOption_palette, (PyMethodDef *)varset_QStyleOption_palette, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_rect, (PyMethodDef *)varget_QStyleOption_rect, (PyMethodDef *)varset_QStyleOption_rect, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_state, (PyMethodDef *)varget_QStyleOption_state, (PyMethodDef *)varset_QStyleOption_state, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_styleObject, (PyMethodDef *)varget_QStyleOption_styleObject, (PyMethodDef *)varset_QStyleOption_styleObject, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_type, (PyMethodDef *)varget_QStyleOption_type, (PyMethodDef *)varset_QStyleOption_type, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_version, (PyMethodDef *)varget_QStyleOption_version, (PyMethodDef *)varset_QStyleOption_version, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_QStyleOption, "\1QStyleOption(version: int = QStyleOption.StyleOptionVersion.Version, type: int = QStyleOption.OptionType.SO_Default)\n"
"QStyleOption(QStyleOption)");


static pyqt5ClassPluginDef plugin_QStyleOption = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtWidgets_QStyleOption = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QStyleOption,
        SIP_NULLPTR,
        &plugin_QStyleOption
    },
    {
        sipNameNr_QStyleOption,
        {0, 0, 1},
        1, methods_QStyleOption,
        28, enummembers_QStyleOption,
        8, variables_QStyleOption,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QStyleOption,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_QStyleOption,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QStyleOption,
    assign_QStyleOption,
    array_QStyleOption,
    copy_QStyleOption,
    release_QStyleOption,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
