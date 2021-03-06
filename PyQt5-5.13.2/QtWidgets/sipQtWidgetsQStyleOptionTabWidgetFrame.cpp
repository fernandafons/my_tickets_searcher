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

#line 243 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionTabWidgetFrame.cpp"

#line 26 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionTabWidgetFrame.cpp"
#line 26 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionTabWidgetFrame.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qtabbar.sip"
#include <qtabbar.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionTabWidgetFrame.cpp"
#line 28 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 42 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionTabWidgetFrame.cpp"


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QStyleOptionTabWidgetFrame(void *, const sipTypeDef *);}
static void *cast_QStyleOptionTabWidgetFrame(void *sipCppV, const sipTypeDef *targetType)
{
     ::QStyleOptionTabWidgetFrame *sipCpp = reinterpret_cast< ::QStyleOptionTabWidgetFrame *>(sipCppV);

    if (targetType == sipType_QStyleOption)
        return static_cast< ::QStyleOption *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionTabWidgetFrame(void *, int);}
static void release_QStyleOptionTabWidgetFrame(void *sipCppV, int)
{
    delete reinterpret_cast< ::QStyleOptionTabWidgetFrame *>(sipCppV);
}


extern "C" {static void *array_QStyleOptionTabWidgetFrame(Py_ssize_t);}
static void *array_QStyleOptionTabWidgetFrame(Py_ssize_t sipNrElem)
{
    return new  ::QStyleOptionTabWidgetFrame[sipNrElem];
}


extern "C" {static void assign_QStyleOptionTabWidgetFrame(void *, Py_ssize_t, void *);}
static void assign_QStyleOptionTabWidgetFrame(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QStyleOptionTabWidgetFrame *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QStyleOptionTabWidgetFrame *>(sipSrc);
}


extern "C" {static void *copy_QStyleOptionTabWidgetFrame(const void *, Py_ssize_t);}
static void *copy_QStyleOptionTabWidgetFrame(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QStyleOptionTabWidgetFrame(reinterpret_cast<const  ::QStyleOptionTabWidgetFrame *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionTabWidgetFrame(sipSimpleWrapper *);}
static void dealloc_QStyleOptionTabWidgetFrame(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QStyleOptionTabWidgetFrame(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QStyleOptionTabWidgetFrame(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionTabWidgetFrame(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QStyleOptionTabWidgetFrame *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QStyleOptionTabWidgetFrame();

            return sipCpp;
        }
    }

    {
        const  ::QStyleOptionTabWidgetFrame* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QStyleOptionTabWidgetFrame, &a0))
        {
            sipCpp = new  ::QStyleOptionTabWidgetFrame(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionTabWidgetFrame[] = {{312, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionTabWidgetFrame[] = {
    {sipName_Type, static_cast<int>( ::QStyleOptionTabWidgetFrame::Type), 383},
    {sipName_Version, static_cast<int>( ::QStyleOptionTabWidgetFrame::Version), 384},
};


extern "C" {static PyObject *varget_QStyleOptionTabWidgetFrame_leftCornerWidgetSize(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTabWidgetFrame_leftCornerWidgetSize(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::QSize*sipVal;
     ::QStyleOptionTabWidgetFrame *sipCpp = reinterpret_cast< ::QStyleOptionTabWidgetFrame *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -119);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->leftCornerWidgetSize;

    sipPy = sipConvertFromType(sipVal, sipType_QSize, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -36, sipPySelf);
        sipKeepReference(sipPySelf, -119, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_QStyleOptionTabWidgetFrame_leftCornerWidgetSize(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTabWidgetFrame_leftCornerWidgetSize(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QSize*sipVal;
     ::QStyleOptionTabWidgetFrame *sipCpp = reinterpret_cast< ::QStyleOptionTabWidgetFrame *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QSize *>(sipForceConvertToType(sipPy, sipType_QSize, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->leftCornerWidgetSize = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTabWidgetFrame_lineWidth(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTabWidgetFrame_lineWidth(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::QStyleOptionTabWidgetFrame *sipCpp = reinterpret_cast< ::QStyleOptionTabWidgetFrame *>(sipSelf);

    sipVal = sipCpp->lineWidth;

    return PyLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionTabWidgetFrame_lineWidth(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTabWidgetFrame_lineWidth(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::QStyleOptionTabWidgetFrame *sipCpp = reinterpret_cast< ::QStyleOptionTabWidgetFrame *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->lineWidth = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTabWidgetFrame_midLineWidth(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTabWidgetFrame_midLineWidth(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::QStyleOptionTabWidgetFrame *sipCpp = reinterpret_cast< ::QStyleOptionTabWidgetFrame *>(sipSelf);

    sipVal = sipCpp->midLineWidth;

    return PyLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionTabWidgetFrame_midLineWidth(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTabWidgetFrame_midLineWidth(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::QStyleOptionTabWidgetFrame *sipCpp = reinterpret_cast< ::QStyleOptionTabWidgetFrame *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->midLineWidth = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTabWidgetFrame_rightCornerWidgetSize(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTabWidgetFrame_rightCornerWidgetSize(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::QSize*sipVal;
     ::QStyleOptionTabWidgetFrame *sipCpp = reinterpret_cast< ::QStyleOptionTabWidgetFrame *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -120);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->rightCornerWidgetSize;

    sipPy = sipConvertFromType(sipVal, sipType_QSize, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -37, sipPySelf);
        sipKeepReference(sipPySelf, -120, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_QStyleOptionTabWidgetFrame_rightCornerWidgetSize(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTabWidgetFrame_rightCornerWidgetSize(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QSize*sipVal;
     ::QStyleOptionTabWidgetFrame *sipCpp = reinterpret_cast< ::QStyleOptionTabWidgetFrame *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QSize *>(sipForceConvertToType(sipPy, sipType_QSize, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->rightCornerWidgetSize = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTabWidgetFrame_selectedTabRect(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTabWidgetFrame_selectedTabRect(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::QRect*sipVal;
     ::QStyleOptionTabWidgetFrame *sipCpp = reinterpret_cast< ::QStyleOptionTabWidgetFrame *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -121);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->selectedTabRect;

    sipPy = sipConvertFromType(sipVal, sipType_QRect, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -38, sipPySelf);
        sipKeepReference(sipPySelf, -121, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_QStyleOptionTabWidgetFrame_selectedTabRect(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTabWidgetFrame_selectedTabRect(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QRect*sipVal;
     ::QStyleOptionTabWidgetFrame *sipCpp = reinterpret_cast< ::QStyleOptionTabWidgetFrame *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QRect *>(sipForceConvertToType(sipPy, sipType_QRect, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->selectedTabRect = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTabWidgetFrame_shape(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTabWidgetFrame_shape(void *sipSelf, PyObject *, PyObject *)
{
     ::QTabBar::Shape sipVal;
     ::QStyleOptionTabWidgetFrame *sipCpp = reinterpret_cast< ::QStyleOptionTabWidgetFrame *>(sipSelf);

    sipVal = sipCpp->shape;

    return sipConvertFromEnum(static_cast<int>(sipVal), sipType_QTabBar_Shape);
}


extern "C" {static int varset_QStyleOptionTabWidgetFrame_shape(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTabWidgetFrame_shape(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QTabBar::Shape sipVal;
     ::QStyleOptionTabWidgetFrame *sipCpp = reinterpret_cast< ::QStyleOptionTabWidgetFrame *>(sipSelf);

    sipVal = ( ::QTabBar::Shape)sipConvertToEnum(sipPy, sipType_QTabBar_Shape);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->shape = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTabWidgetFrame_tabBarRect(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTabWidgetFrame_tabBarRect(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::QRect*sipVal;
     ::QStyleOptionTabWidgetFrame *sipCpp = reinterpret_cast< ::QStyleOptionTabWidgetFrame *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -122);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->tabBarRect;

    sipPy = sipConvertFromType(sipVal, sipType_QRect, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -39, sipPySelf);
        sipKeepReference(sipPySelf, -122, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_QStyleOptionTabWidgetFrame_tabBarRect(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTabWidgetFrame_tabBarRect(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QRect*sipVal;
     ::QStyleOptionTabWidgetFrame *sipCpp = reinterpret_cast< ::QStyleOptionTabWidgetFrame *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QRect *>(sipForceConvertToType(sipPy, sipType_QRect, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->tabBarRect = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTabWidgetFrame_tabBarSize(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTabWidgetFrame_tabBarSize(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::QSize*sipVal;
     ::QStyleOptionTabWidgetFrame *sipCpp = reinterpret_cast< ::QStyleOptionTabWidgetFrame *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -123);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->tabBarSize;

    sipPy = sipConvertFromType(sipVal, sipType_QSize, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -40, sipPySelf);
        sipKeepReference(sipPySelf, -123, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_QStyleOptionTabWidgetFrame_tabBarSize(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTabWidgetFrame_tabBarSize(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QSize*sipVal;
     ::QStyleOptionTabWidgetFrame *sipCpp = reinterpret_cast< ::QStyleOptionTabWidgetFrame *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QSize *>(sipForceConvertToType(sipPy, sipType_QSize, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->tabBarSize = *sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionTabWidgetFrame[] = {
    {InstanceVariable, sipName_leftCornerWidgetSize, (PyMethodDef *)varget_QStyleOptionTabWidgetFrame_leftCornerWidgetSize, (PyMethodDef *)varset_QStyleOptionTabWidgetFrame_leftCornerWidgetSize, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_lineWidth, (PyMethodDef *)varget_QStyleOptionTabWidgetFrame_lineWidth, (PyMethodDef *)varset_QStyleOptionTabWidgetFrame_lineWidth, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_midLineWidth, (PyMethodDef *)varget_QStyleOptionTabWidgetFrame_midLineWidth, (PyMethodDef *)varset_QStyleOptionTabWidgetFrame_midLineWidth, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_rightCornerWidgetSize, (PyMethodDef *)varget_QStyleOptionTabWidgetFrame_rightCornerWidgetSize, (PyMethodDef *)varset_QStyleOptionTabWidgetFrame_rightCornerWidgetSize, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_selectedTabRect, (PyMethodDef *)varget_QStyleOptionTabWidgetFrame_selectedTabRect, (PyMethodDef *)varset_QStyleOptionTabWidgetFrame_selectedTabRect, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_shape, (PyMethodDef *)varget_QStyleOptionTabWidgetFrame_shape, (PyMethodDef *)varset_QStyleOptionTabWidgetFrame_shape, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_tabBarRect, (PyMethodDef *)varget_QStyleOptionTabWidgetFrame_tabBarRect, (PyMethodDef *)varset_QStyleOptionTabWidgetFrame_tabBarRect, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_tabBarSize, (PyMethodDef *)varget_QStyleOptionTabWidgetFrame_tabBarSize, (PyMethodDef *)varset_QStyleOptionTabWidgetFrame_tabBarSize, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_QStyleOptionTabWidgetFrame, "\1QStyleOptionTabWidgetFrame()\n"
"QStyleOptionTabWidgetFrame(QStyleOptionTabWidgetFrame)");


static pyqt5ClassPluginDef plugin_QStyleOptionTabWidgetFrame = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtWidgets_QStyleOptionTabWidgetFrame = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionTabWidgetFrame,
        SIP_NULLPTR,
        &plugin_QStyleOptionTabWidgetFrame
    },
    {
        sipNameNr_QStyleOptionTabWidgetFrame,
        {0, 0, 1},
        0, SIP_NULLPTR,
        2, enummembers_QStyleOptionTabWidgetFrame,
        8, variables_QStyleOptionTabWidgetFrame,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QStyleOptionTabWidgetFrame,
    -1,
    -1,
    supers_QStyleOptionTabWidgetFrame,
    SIP_NULLPTR,
    init_type_QStyleOptionTabWidgetFrame,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QStyleOptionTabWidgetFrame,
    assign_QStyleOptionTabWidgetFrame,
    array_QStyleOptionTabWidgetFrame,
    copy_QStyleOptionTabWidgetFrame,
    release_QStyleOptionTabWidgetFrame,
    cast_QStyleOptionTabWidgetFrame,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
