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

#line 272 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionTabBarBase.cpp"

#line 26 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionTabBarBase.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qtabbar.sip"
#include <qtabbar.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionTabBarBase.cpp"
#line 28 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionTabBarBase.cpp"


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QStyleOptionTabBarBase(void *, const sipTypeDef *);}
static void *cast_QStyleOptionTabBarBase(void *sipCppV, const sipTypeDef *targetType)
{
     ::QStyleOptionTabBarBase *sipCpp = reinterpret_cast< ::QStyleOptionTabBarBase *>(sipCppV);

    if (targetType == sipType_QStyleOption)
        return static_cast< ::QStyleOption *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionTabBarBase(void *, int);}
static void release_QStyleOptionTabBarBase(void *sipCppV, int)
{
    delete reinterpret_cast< ::QStyleOptionTabBarBase *>(sipCppV);
}


extern "C" {static void *array_QStyleOptionTabBarBase(Py_ssize_t);}
static void *array_QStyleOptionTabBarBase(Py_ssize_t sipNrElem)
{
    return new  ::QStyleOptionTabBarBase[sipNrElem];
}


extern "C" {static void assign_QStyleOptionTabBarBase(void *, Py_ssize_t, void *);}
static void assign_QStyleOptionTabBarBase(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QStyleOptionTabBarBase *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QStyleOptionTabBarBase *>(sipSrc);
}


extern "C" {static void *copy_QStyleOptionTabBarBase(const void *, Py_ssize_t);}
static void *copy_QStyleOptionTabBarBase(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QStyleOptionTabBarBase(reinterpret_cast<const  ::QStyleOptionTabBarBase *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionTabBarBase(sipSimpleWrapper *);}
static void dealloc_QStyleOptionTabBarBase(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QStyleOptionTabBarBase(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QStyleOptionTabBarBase(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionTabBarBase(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QStyleOptionTabBarBase *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QStyleOptionTabBarBase();

            return sipCpp;
        }
    }

    {
        const  ::QStyleOptionTabBarBase* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QStyleOptionTabBarBase, &a0))
        {
            sipCpp = new  ::QStyleOptionTabBarBase(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionTabBarBase[] = {{312, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionTabBarBase[] = {
    {sipName_Type, static_cast<int>( ::QStyleOptionTabBarBase::Type), 380},
    {sipName_Version, static_cast<int>( ::QStyleOptionTabBarBase::Version), 381},
};


extern "C" {static PyObject *varget_QStyleOptionTabBarBase_documentMode(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTabBarBase_documentMode(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
     ::QStyleOptionTabBarBase *sipCpp = reinterpret_cast< ::QStyleOptionTabBarBase *>(sipSelf);

    sipVal = sipCpp->documentMode;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionTabBarBase_documentMode(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTabBarBase_documentMode(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::QStyleOptionTabBarBase *sipCpp = reinterpret_cast< ::QStyleOptionTabBarBase *>(sipSelf);

    sipVal = sipConvertToBool(sipPy);

    if (sipVal < 0)
        return -1;

    sipCpp->documentMode = static_cast<bool>(sipVal);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTabBarBase_selectedTabRect(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTabBarBase_selectedTabRect(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::QRect*sipVal;
     ::QStyleOptionTabBarBase *sipCpp = reinterpret_cast< ::QStyleOptionTabBarBase *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -117);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->selectedTabRect;

    sipPy = sipConvertFromType(sipVal, sipType_QRect, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -34, sipPySelf);
        sipKeepReference(sipPySelf, -117, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_QStyleOptionTabBarBase_selectedTabRect(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTabBarBase_selectedTabRect(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QRect*sipVal;
     ::QStyleOptionTabBarBase *sipCpp = reinterpret_cast< ::QStyleOptionTabBarBase *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QRect *>(sipForceConvertToType(sipPy, sipType_QRect, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->selectedTabRect = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTabBarBase_shape(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTabBarBase_shape(void *sipSelf, PyObject *, PyObject *)
{
     ::QTabBar::Shape sipVal;
     ::QStyleOptionTabBarBase *sipCpp = reinterpret_cast< ::QStyleOptionTabBarBase *>(sipSelf);

    sipVal = sipCpp->shape;

    return sipConvertFromEnum(static_cast<int>(sipVal), sipType_QTabBar_Shape);
}


extern "C" {static int varset_QStyleOptionTabBarBase_shape(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTabBarBase_shape(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QTabBar::Shape sipVal;
     ::QStyleOptionTabBarBase *sipCpp = reinterpret_cast< ::QStyleOptionTabBarBase *>(sipSelf);

    sipVal = ( ::QTabBar::Shape)sipConvertToEnum(sipPy, sipType_QTabBar_Shape);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->shape = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTabBarBase_tabBarRect(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTabBarBase_tabBarRect(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::QRect*sipVal;
     ::QStyleOptionTabBarBase *sipCpp = reinterpret_cast< ::QStyleOptionTabBarBase *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -118);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->tabBarRect;

    sipPy = sipConvertFromType(sipVal, sipType_QRect, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -35, sipPySelf);
        sipKeepReference(sipPySelf, -118, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_QStyleOptionTabBarBase_tabBarRect(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTabBarBase_tabBarRect(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QRect*sipVal;
     ::QStyleOptionTabBarBase *sipCpp = reinterpret_cast< ::QStyleOptionTabBarBase *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QRect *>(sipForceConvertToType(sipPy, sipType_QRect, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->tabBarRect = *sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionTabBarBase[] = {
    {InstanceVariable, sipName_documentMode, (PyMethodDef *)varget_QStyleOptionTabBarBase_documentMode, (PyMethodDef *)varset_QStyleOptionTabBarBase_documentMode, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_selectedTabRect, (PyMethodDef *)varget_QStyleOptionTabBarBase_selectedTabRect, (PyMethodDef *)varset_QStyleOptionTabBarBase_selectedTabRect, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_shape, (PyMethodDef *)varget_QStyleOptionTabBarBase_shape, (PyMethodDef *)varset_QStyleOptionTabBarBase_shape, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_tabBarRect, (PyMethodDef *)varget_QStyleOptionTabBarBase_tabBarRect, (PyMethodDef *)varset_QStyleOptionTabBarBase_tabBarRect, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_QStyleOptionTabBarBase, "\1QStyleOptionTabBarBase()\n"
"QStyleOptionTabBarBase(QStyleOptionTabBarBase)");


static pyqt5ClassPluginDef plugin_QStyleOptionTabBarBase = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtWidgets_QStyleOptionTabBarBase = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionTabBarBase,
        SIP_NULLPTR,
        &plugin_QStyleOptionTabBarBase
    },
    {
        sipNameNr_QStyleOptionTabBarBase,
        {0, 0, 1},
        0, SIP_NULLPTR,
        2, enummembers_QStyleOptionTabBarBase,
        4, variables_QStyleOptionTabBarBase,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QStyleOptionTabBarBase,
    -1,
    -1,
    supers_QStyleOptionTabBarBase,
    SIP_NULLPTR,
    init_type_QStyleOptionTabBarBase,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QStyleOptionTabBarBase,
    assign_QStyleOptionTabBarBase,
    array_QStyleOptionTabBarBase,
    copy_QStyleOptionTabBarBase,
    release_QStyleOptionTabBarBase,
    cast_QStyleOptionTabBarBase,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};