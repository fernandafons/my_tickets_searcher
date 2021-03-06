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

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qjsondocument.sip"
#include <qjsondocument.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQJsonParseError.cpp"

#line 27 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQJsonParseError.cpp"


PyDoc_STRVAR(doc_QJsonParseError_errorString, "errorString(self) -> str");

extern "C" {static PyObject *meth_QJsonParseError_errorString(PyObject *, PyObject *);}
static PyObject *meth_QJsonParseError_errorString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QJsonParseError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJsonParseError, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->errorString());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QJsonParseError, sipName_errorString, doc_QJsonParseError_errorString);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_QJsonParseError(void *, int);}
static void release_QJsonParseError(void *sipCppV, int)
{
    delete reinterpret_cast< ::QJsonParseError *>(sipCppV);
}


extern "C" {static void *array_QJsonParseError(Py_ssize_t);}
static void *array_QJsonParseError(Py_ssize_t sipNrElem)
{
    return new  ::QJsonParseError[sipNrElem];
}


extern "C" {static void assign_QJsonParseError(void *, Py_ssize_t, void *);}
static void assign_QJsonParseError(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QJsonParseError *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QJsonParseError *>(sipSrc);
}


extern "C" {static void *copy_QJsonParseError(const void *, Py_ssize_t);}
static void *copy_QJsonParseError(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QJsonParseError(reinterpret_cast<const  ::QJsonParseError *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QJsonParseError(sipSimpleWrapper *);}
static void dealloc_QJsonParseError(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QJsonParseError(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QJsonParseError(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QJsonParseError(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QJsonParseError *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QJsonParseError();

            return sipCpp;
        }
    }

    {
        const  ::QJsonParseError* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QJsonParseError, &a0))
        {
            sipCpp = new  ::QJsonParseError(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_QJsonParseError[] = {
    {sipName_errorString, meth_QJsonParseError_errorString, METH_VARARGS, doc_QJsonParseError_errorString}
};

static sipEnumMemberDef enummembers_QJsonParseError[] = {
    {sipName_DeepNesting, static_cast<int>( ::QJsonParseError::DeepNesting), 110},
    {sipName_DocumentTooLarge, static_cast<int>( ::QJsonParseError::DocumentTooLarge), 110},
    {sipName_GarbageAtEnd, static_cast<int>( ::QJsonParseError::GarbageAtEnd), 110},
    {sipName_IllegalEscapeSequence, static_cast<int>( ::QJsonParseError::IllegalEscapeSequence), 110},
    {sipName_IllegalNumber, static_cast<int>( ::QJsonParseError::IllegalNumber), 110},
    {sipName_IllegalUTF8String, static_cast<int>( ::QJsonParseError::IllegalUTF8String), 110},
    {sipName_IllegalValue, static_cast<int>( ::QJsonParseError::IllegalValue), 110},
    {sipName_MissingNameSeparator, static_cast<int>( ::QJsonParseError::MissingNameSeparator), 110},
    {sipName_MissingObject, static_cast<int>( ::QJsonParseError::MissingObject), 110},
    {sipName_MissingValueSeparator, static_cast<int>( ::QJsonParseError::MissingValueSeparator), 110},
    {sipName_NoError, static_cast<int>( ::QJsonParseError::NoError), 110},
    {sipName_TerminationByNumber, static_cast<int>( ::QJsonParseError::TerminationByNumber), 110},
    {sipName_UnterminatedArray, static_cast<int>( ::QJsonParseError::UnterminatedArray), 110},
    {sipName_UnterminatedObject, static_cast<int>( ::QJsonParseError::UnterminatedObject), 110},
    {sipName_UnterminatedString, static_cast<int>( ::QJsonParseError::UnterminatedString), 110},
};


extern "C" {static PyObject *varget_QJsonParseError_error(void *, PyObject *, PyObject *);}
static PyObject *varget_QJsonParseError_error(void *sipSelf, PyObject *, PyObject *)
{
     ::QJsonParseError::ParseError sipVal;
     ::QJsonParseError *sipCpp = reinterpret_cast< ::QJsonParseError *>(sipSelf);

    sipVal = sipCpp->error;

    return sipConvertFromEnum(static_cast<int>(sipVal), sipType_QJsonParseError_ParseError);
}


extern "C" {static int varset_QJsonParseError_error(void *, PyObject *, PyObject *);}
static int varset_QJsonParseError_error(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QJsonParseError::ParseError sipVal;
     ::QJsonParseError *sipCpp = reinterpret_cast< ::QJsonParseError *>(sipSelf);

    sipVal = ( ::QJsonParseError::ParseError)sipConvertToEnum(sipPy, sipType_QJsonParseError_ParseError);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->error = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QJsonParseError_offset(void *, PyObject *, PyObject *);}
static PyObject *varget_QJsonParseError_offset(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::QJsonParseError *sipCpp = reinterpret_cast< ::QJsonParseError *>(sipSelf);

    sipVal = sipCpp->offset;

    return PyLong_FromLong(sipVal);
}


extern "C" {static int varset_QJsonParseError_offset(void *, PyObject *, PyObject *);}
static int varset_QJsonParseError_offset(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::QJsonParseError *sipCpp = reinterpret_cast< ::QJsonParseError *>(sipSelf);

    sipVal = sipLong_AsInt(sipPy);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->offset = sipVal;

    return 0;
}

sipVariableDef variables_QJsonParseError[] = {
    {InstanceVariable, sipName_error, (PyMethodDef *)varget_QJsonParseError_error, (PyMethodDef *)varset_QJsonParseError_error, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_offset, (PyMethodDef *)varget_QJsonParseError_offset, (PyMethodDef *)varset_QJsonParseError_offset, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_QJsonParseError, "\1QJsonParseError()\n"
"QJsonParseError(QJsonParseError)");


static pyqt5ClassPluginDef plugin_QJsonParseError = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QJsonParseError = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QJsonParseError,
        SIP_NULLPTR,
        &plugin_QJsonParseError
    },
    {
        sipNameNr_QJsonParseError,
        {0, 0, 1},
        1, methods_QJsonParseError,
        15, enummembers_QJsonParseError,
        2, variables_QJsonParseError,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QJsonParseError,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_QJsonParseError,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QJsonParseError,
    assign_QJsonParseError,
    array_QJsonParseError,
    copy_QJsonParseError,
    release_QJsonParseError,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
