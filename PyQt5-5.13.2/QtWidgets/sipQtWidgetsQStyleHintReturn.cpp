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

#line 867 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleHintReturn.cpp"



/* Call the instance's destructor. */
extern "C" {static void release_QStyleHintReturn(void *, int);}
static void release_QStyleHintReturn(void *sipCppV, int)
{
    delete reinterpret_cast< ::QStyleHintReturn *>(sipCppV);
}


extern "C" {static void *array_QStyleHintReturn(Py_ssize_t);}
static void *array_QStyleHintReturn(Py_ssize_t sipNrElem)
{
    return new  ::QStyleHintReturn[sipNrElem];
}


extern "C" {static void assign_QStyleHintReturn(void *, Py_ssize_t, void *);}
static void assign_QStyleHintReturn(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QStyleHintReturn *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QStyleHintReturn *>(sipSrc);
}


extern "C" {static void *copy_QStyleHintReturn(const void *, Py_ssize_t);}
static void *copy_QStyleHintReturn(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QStyleHintReturn(reinterpret_cast<const  ::QStyleHintReturn *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleHintReturn(sipSimpleWrapper *);}
static void dealloc_QStyleHintReturn(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QStyleHintReturn(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QStyleHintReturn(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleHintReturn(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QStyleHintReturn *sipCpp = SIP_NULLPTR;

    {
        int a0 = QStyleOption::StyleOptionVersion::Version;
        int a1 = QStyleHintReturn::HintReturnType::SH_Default;

        static const char *sipKwdList[] = {
            sipName_version,
            sipName_type,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|ii", &a0, &a1))
        {
            sipCpp = new  ::QStyleHintReturn(a0,a1);

            return sipCpp;
        }
    }

    {
        const  ::QStyleHintReturn* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QStyleHintReturn, &a0))
        {
            sipCpp = new  ::QStyleHintReturn(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}

static sipEnumMemberDef enummembers_QStyleHintReturn[] = {
    {sipName_SH_Default, static_cast<int>( ::QStyleHintReturn::SH_Default), 303},
    {sipName_SH_Mask, static_cast<int>( ::QStyleHintReturn::SH_Mask), 303},
    {sipName_SH_Variant, static_cast<int>( ::QStyleHintReturn::SH_Variant), 303},
    {sipName_Type, static_cast<int>( ::QStyleHintReturn::Type), 304},
    {sipName_Version, static_cast<int>( ::QStyleHintReturn::Version), 305},
};


extern "C" {static PyObject *varget_QStyleHintReturn_type(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleHintReturn_type(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::QStyleHintReturn *sipCpp = reinterpret_cast< ::QStyleHintReturn *>(sipSelf);

    sipVal = sipCpp->type;

    return PyLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleHintReturn_type(void *, PyObject *, PyObject *);}
static int varset_QStyleHintReturn_type(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::QStyleHintReturn *sipCpp = reinterpret_cast< ::QStyleHintReturn *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->type = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleHintReturn_version(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleHintReturn_version(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::QStyleHintReturn *sipCpp = reinterpret_cast< ::QStyleHintReturn *>(sipSelf);

    sipVal = sipCpp->version;

    return PyLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleHintReturn_version(void *, PyObject *, PyObject *);}
static int varset_QStyleHintReturn_version(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::QStyleHintReturn *sipCpp = reinterpret_cast< ::QStyleHintReturn *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->version = sipVal;

    return 0;
}

sipVariableDef variables_QStyleHintReturn[] = {
    {InstanceVariable, sipName_type, (PyMethodDef *)varget_QStyleHintReturn_type, (PyMethodDef *)varset_QStyleHintReturn_type, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_version, (PyMethodDef *)varget_QStyleHintReturn_version, (PyMethodDef *)varset_QStyleHintReturn_version, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_QStyleHintReturn, "\1QStyleHintReturn(version: int = QStyleOption.StyleOptionVersion.Version, type: int = QStyleHintReturn.HintReturnType.SH_Default)\n"
"QStyleHintReturn(QStyleHintReturn)");


static pyqt5ClassPluginDef plugin_QStyleHintReturn = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtWidgets_QStyleHintReturn = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QStyleHintReturn,
        SIP_NULLPTR,
        &plugin_QStyleHintReturn
    },
    {
        sipNameNr_QStyleHintReturn,
        {0, 0, 1},
        0, SIP_NULLPTR,
        5, enummembers_QStyleHintReturn,
        2, variables_QStyleHintReturn,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QStyleHintReturn,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_QStyleHintReturn,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QStyleHintReturn,
    assign_QStyleHintReturn,
    array_QStyleHintReturn,
    copy_QStyleHintReturn,
    release_QStyleHintReturn,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
