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

#include "sipAPIQtCore.h"

#line 42 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qlogging.sip"
#include <qlogging.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQMessageLogContext.cpp"



/* Call the instance's destructor. */
extern "C" {static void release_QMessageLogContext(void *, int);}
static void release_QMessageLogContext(void *sipCppV, int)
{
    delete reinterpret_cast< ::QMessageLogContext *>(sipCppV);
}


extern "C" {static void dealloc_QMessageLogContext(sipSimpleWrapper *);}
static void dealloc_QMessageLogContext(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QMessageLogContext(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static PyObject *varget_QMessageLogContext_category(void *, PyObject *, PyObject *);}
static PyObject *varget_QMessageLogContext_category(void *sipSelf, PyObject *, PyObject *)
{
    const char*sipVal;
     ::QMessageLogContext *sipCpp = reinterpret_cast< ::QMessageLogContext *>(sipSelf);

    sipVal = sipCpp->category;

    if (sipVal == SIP_NULLPTR)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    return PyUnicode_DecodeASCII(sipVal, strlen(sipVal), SIP_NULLPTR);
}


extern "C" {static int varset_QMessageLogContext_category(void *, PyObject *, PyObject *);}
static int varset_QMessageLogContext_category(void *sipSelf, PyObject *sipPy, PyObject *sipPySelf)
{
    const char*sipVal;
     ::QMessageLogContext *sipCpp = reinterpret_cast< ::QMessageLogContext *>(sipSelf);

    sipVal = sipString_AsASCIIString(&sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->category = sipVal;

    sipKeepReference(sipPySelf, -15, sipPy);

    return 0;
}


extern "C" {static PyObject *varget_QMessageLogContext_file(void *, PyObject *, PyObject *);}
static PyObject *varget_QMessageLogContext_file(void *sipSelf, PyObject *, PyObject *)
{
    const char*sipVal;
     ::QMessageLogContext *sipCpp = reinterpret_cast< ::QMessageLogContext *>(sipSelf);

    sipVal = sipCpp->file;

    if (sipVal == SIP_NULLPTR)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    return PyUnicode_DecodeASCII(sipVal, strlen(sipVal), SIP_NULLPTR);
}


extern "C" {static int varset_QMessageLogContext_file(void *, PyObject *, PyObject *);}
static int varset_QMessageLogContext_file(void *sipSelf, PyObject *sipPy, PyObject *sipPySelf)
{
    const char*sipVal;
     ::QMessageLogContext *sipCpp = reinterpret_cast< ::QMessageLogContext *>(sipSelf);

    sipVal = sipString_AsASCIIString(&sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->file = sipVal;

    sipKeepReference(sipPySelf, -16, sipPy);

    return 0;
}


extern "C" {static PyObject *varget_QMessageLogContext_function(void *, PyObject *, PyObject *);}
static PyObject *varget_QMessageLogContext_function(void *sipSelf, PyObject *, PyObject *)
{
    const char*sipVal;
     ::QMessageLogContext *sipCpp = reinterpret_cast< ::QMessageLogContext *>(sipSelf);

    sipVal = sipCpp->function;

    if (sipVal == SIP_NULLPTR)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    return PyUnicode_DecodeASCII(sipVal, strlen(sipVal), SIP_NULLPTR);
}


extern "C" {static int varset_QMessageLogContext_function(void *, PyObject *, PyObject *);}
static int varset_QMessageLogContext_function(void *sipSelf, PyObject *sipPy, PyObject *sipPySelf)
{
    const char*sipVal;
     ::QMessageLogContext *sipCpp = reinterpret_cast< ::QMessageLogContext *>(sipSelf);

    sipVal = sipString_AsASCIIString(&sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->function = sipVal;

    sipKeepReference(sipPySelf, -17, sipPy);

    return 0;
}


extern "C" {static PyObject *varget_QMessageLogContext_line(void *, PyObject *, PyObject *);}
static PyObject *varget_QMessageLogContext_line(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::QMessageLogContext *sipCpp = reinterpret_cast< ::QMessageLogContext *>(sipSelf);

    sipVal = sipCpp->line;

    return PyLong_FromLong(sipVal);
}


extern "C" {static int varset_QMessageLogContext_line(void *, PyObject *, PyObject *);}
static int varset_QMessageLogContext_line(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::QMessageLogContext *sipCpp = reinterpret_cast< ::QMessageLogContext *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->line = sipVal;

    return 0;
}

sipVariableDef variables_QMessageLogContext[] = {
    {InstanceVariable, sipName_category, (PyMethodDef *)varget_QMessageLogContext_category, (PyMethodDef *)varset_QMessageLogContext_category, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_file, (PyMethodDef *)varget_QMessageLogContext_file, (PyMethodDef *)varset_QMessageLogContext_file, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_function, (PyMethodDef *)varget_QMessageLogContext_function, (PyMethodDef *)varset_QMessageLogContext_function, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_line, (PyMethodDef *)varget_QMessageLogContext_line, (PyMethodDef *)varset_QMessageLogContext_line, SIP_NULLPTR, SIP_NULLPTR},
};


static pyqt5ClassPluginDef plugin_QMessageLogContext = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QMessageLogContext = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QMessageLogContext,
        SIP_NULLPTR,
        &plugin_QMessageLogContext
    },
    {
        sipNameNr_QMessageLogContext,
        {0, 0, 1},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        4, variables_QMessageLogContext,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QMessageLogContext,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_QMessageLogContext,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
