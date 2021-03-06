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

#include "sipAPIQtNetwork.h"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtNetwork/qdnslookup.sip"
#include <qdnslookup.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQDnsDomainNameRecord.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQDnsDomainNameRecord.cpp"


PyDoc_STRVAR(doc_QDnsDomainNameRecord_swap, "swap(self, QDnsDomainNameRecord)");

extern "C" {static PyObject *meth_QDnsDomainNameRecord_swap(PyObject *, PyObject *);}
static PyObject *meth_QDnsDomainNameRecord_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QDnsDomainNameRecord* a0;
         ::QDnsDomainNameRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDnsDomainNameRecord, &sipCpp, sipType_QDnsDomainNameRecord, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QDnsDomainNameRecord, sipName_swap, doc_QDnsDomainNameRecord_swap);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDnsDomainNameRecord_name, "name(self) -> str");

extern "C" {static PyObject *meth_QDnsDomainNameRecord_name(PyObject *, PyObject *);}
static PyObject *meth_QDnsDomainNameRecord_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDnsDomainNameRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsDomainNameRecord, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->name());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDnsDomainNameRecord, sipName_name, doc_QDnsDomainNameRecord_name);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDnsDomainNameRecord_timeToLive, "timeToLive(self) -> int");

extern "C" {static PyObject *meth_QDnsDomainNameRecord_timeToLive(PyObject *, PyObject *);}
static PyObject *meth_QDnsDomainNameRecord_timeToLive(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDnsDomainNameRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsDomainNameRecord, &sipCpp))
        {
             ::quint32 sipRes;

            sipRes = sipCpp->timeToLive();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDnsDomainNameRecord, sipName_timeToLive, doc_QDnsDomainNameRecord_timeToLive);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDnsDomainNameRecord_value, "value(self) -> str");

extern "C" {static PyObject *meth_QDnsDomainNameRecord_value(PyObject *, PyObject *);}
static PyObject *meth_QDnsDomainNameRecord_value(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDnsDomainNameRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsDomainNameRecord, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->value());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDnsDomainNameRecord, sipName_value, doc_QDnsDomainNameRecord_value);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDnsDomainNameRecord(void *, int);}
static void release_QDnsDomainNameRecord(void *sipCppV, int)
{
    delete reinterpret_cast< ::QDnsDomainNameRecord *>(sipCppV);
}


extern "C" {static void *array_QDnsDomainNameRecord(Py_ssize_t);}
static void *array_QDnsDomainNameRecord(Py_ssize_t sipNrElem)
{
    return new  ::QDnsDomainNameRecord[sipNrElem];
}


extern "C" {static void assign_QDnsDomainNameRecord(void *, Py_ssize_t, void *);}
static void assign_QDnsDomainNameRecord(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QDnsDomainNameRecord *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QDnsDomainNameRecord *>(sipSrc);
}


extern "C" {static void *copy_QDnsDomainNameRecord(const void *, Py_ssize_t);}
static void *copy_QDnsDomainNameRecord(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QDnsDomainNameRecord(reinterpret_cast<const  ::QDnsDomainNameRecord *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDnsDomainNameRecord(sipSimpleWrapper *);}
static void dealloc_QDnsDomainNameRecord(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QDnsDomainNameRecord(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QDnsDomainNameRecord(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDnsDomainNameRecord(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QDnsDomainNameRecord *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QDnsDomainNameRecord();

            return sipCpp;
        }
    }

    {
        const  ::QDnsDomainNameRecord* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QDnsDomainNameRecord, &a0))
        {
            sipCpp = new  ::QDnsDomainNameRecord(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_QDnsDomainNameRecord[] = {
    {sipName_name, meth_QDnsDomainNameRecord_name, METH_VARARGS, doc_QDnsDomainNameRecord_name},
    {sipName_swap, meth_QDnsDomainNameRecord_swap, METH_VARARGS, doc_QDnsDomainNameRecord_swap},
    {sipName_timeToLive, meth_QDnsDomainNameRecord_timeToLive, METH_VARARGS, doc_QDnsDomainNameRecord_timeToLive},
    {sipName_value, meth_QDnsDomainNameRecord_value, METH_VARARGS, doc_QDnsDomainNameRecord_value}
};

PyDoc_STRVAR(doc_QDnsDomainNameRecord, "\1QDnsDomainNameRecord()\n"
"QDnsDomainNameRecord(QDnsDomainNameRecord)");


static pyqt5ClassPluginDef plugin_QDnsDomainNameRecord = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtNetwork_QDnsDomainNameRecord = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QDnsDomainNameRecord,
        SIP_NULLPTR,
        &plugin_QDnsDomainNameRecord
    },
    {
        sipNameNr_QDnsDomainNameRecord,
        {0, 0, 1},
        4, methods_QDnsDomainNameRecord,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QDnsDomainNameRecord,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_QDnsDomainNameRecord,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QDnsDomainNameRecord,
    assign_QDnsDomainNameRecord,
    array_QDnsDomainNameRecord,
    copy_QDnsDomainNameRecord,
    release_QDnsDomainNameRecord,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
