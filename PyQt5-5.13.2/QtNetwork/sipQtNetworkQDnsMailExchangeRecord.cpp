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

#line 58 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtNetwork/qdnslookup.sip"
#include <qdnslookup.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQDnsMailExchangeRecord.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQDnsMailExchangeRecord.cpp"


PyDoc_STRVAR(doc_QDnsMailExchangeRecord_swap, "swap(self, QDnsMailExchangeRecord)");

extern "C" {static PyObject *meth_QDnsMailExchangeRecord_swap(PyObject *, PyObject *);}
static PyObject *meth_QDnsMailExchangeRecord_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QDnsMailExchangeRecord* a0;
         ::QDnsMailExchangeRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDnsMailExchangeRecord, &sipCpp, sipType_QDnsMailExchangeRecord, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QDnsMailExchangeRecord, sipName_swap, doc_QDnsMailExchangeRecord_swap);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDnsMailExchangeRecord_exchange, "exchange(self) -> str");

extern "C" {static PyObject *meth_QDnsMailExchangeRecord_exchange(PyObject *, PyObject *);}
static PyObject *meth_QDnsMailExchangeRecord_exchange(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDnsMailExchangeRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsMailExchangeRecord, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->exchange());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDnsMailExchangeRecord, sipName_exchange, doc_QDnsMailExchangeRecord_exchange);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDnsMailExchangeRecord_name, "name(self) -> str");

extern "C" {static PyObject *meth_QDnsMailExchangeRecord_name(PyObject *, PyObject *);}
static PyObject *meth_QDnsMailExchangeRecord_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDnsMailExchangeRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsMailExchangeRecord, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->name());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDnsMailExchangeRecord, sipName_name, doc_QDnsMailExchangeRecord_name);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDnsMailExchangeRecord_preference, "preference(self) -> int");

extern "C" {static PyObject *meth_QDnsMailExchangeRecord_preference(PyObject *, PyObject *);}
static PyObject *meth_QDnsMailExchangeRecord_preference(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDnsMailExchangeRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsMailExchangeRecord, &sipCpp))
        {
             ::quint16 sipRes;

            sipRes = sipCpp->preference();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDnsMailExchangeRecord, sipName_preference, doc_QDnsMailExchangeRecord_preference);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDnsMailExchangeRecord_timeToLive, "timeToLive(self) -> int");

extern "C" {static PyObject *meth_QDnsMailExchangeRecord_timeToLive(PyObject *, PyObject *);}
static PyObject *meth_QDnsMailExchangeRecord_timeToLive(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDnsMailExchangeRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsMailExchangeRecord, &sipCpp))
        {
             ::quint32 sipRes;

            sipRes = sipCpp->timeToLive();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDnsMailExchangeRecord, sipName_timeToLive, doc_QDnsMailExchangeRecord_timeToLive);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDnsMailExchangeRecord(void *, int);}
static void release_QDnsMailExchangeRecord(void *sipCppV, int)
{
    delete reinterpret_cast< ::QDnsMailExchangeRecord *>(sipCppV);
}


extern "C" {static void *array_QDnsMailExchangeRecord(Py_ssize_t);}
static void *array_QDnsMailExchangeRecord(Py_ssize_t sipNrElem)
{
    return new  ::QDnsMailExchangeRecord[sipNrElem];
}


extern "C" {static void assign_QDnsMailExchangeRecord(void *, Py_ssize_t, void *);}
static void assign_QDnsMailExchangeRecord(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QDnsMailExchangeRecord *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QDnsMailExchangeRecord *>(sipSrc);
}


extern "C" {static void *copy_QDnsMailExchangeRecord(const void *, Py_ssize_t);}
static void *copy_QDnsMailExchangeRecord(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QDnsMailExchangeRecord(reinterpret_cast<const  ::QDnsMailExchangeRecord *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDnsMailExchangeRecord(sipSimpleWrapper *);}
static void dealloc_QDnsMailExchangeRecord(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QDnsMailExchangeRecord(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QDnsMailExchangeRecord(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDnsMailExchangeRecord(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QDnsMailExchangeRecord *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QDnsMailExchangeRecord();

            return sipCpp;
        }
    }

    {
        const  ::QDnsMailExchangeRecord* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QDnsMailExchangeRecord, &a0))
        {
            sipCpp = new  ::QDnsMailExchangeRecord(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_QDnsMailExchangeRecord[] = {
    {sipName_exchange, meth_QDnsMailExchangeRecord_exchange, METH_VARARGS, doc_QDnsMailExchangeRecord_exchange},
    {sipName_name, meth_QDnsMailExchangeRecord_name, METH_VARARGS, doc_QDnsMailExchangeRecord_name},
    {sipName_preference, meth_QDnsMailExchangeRecord_preference, METH_VARARGS, doc_QDnsMailExchangeRecord_preference},
    {sipName_swap, meth_QDnsMailExchangeRecord_swap, METH_VARARGS, doc_QDnsMailExchangeRecord_swap},
    {sipName_timeToLive, meth_QDnsMailExchangeRecord_timeToLive, METH_VARARGS, doc_QDnsMailExchangeRecord_timeToLive}
};

PyDoc_STRVAR(doc_QDnsMailExchangeRecord, "\1QDnsMailExchangeRecord()\n"
"QDnsMailExchangeRecord(QDnsMailExchangeRecord)");


static pyqt5ClassPluginDef plugin_QDnsMailExchangeRecord = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtNetwork_QDnsMailExchangeRecord = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QDnsMailExchangeRecord,
        SIP_NULLPTR,
        &plugin_QDnsMailExchangeRecord
    },
    {
        sipNameNr_QDnsMailExchangeRecord,
        {0, 0, 1},
        5, methods_QDnsMailExchangeRecord,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QDnsMailExchangeRecord,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_QDnsMailExchangeRecord,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QDnsMailExchangeRecord,
    assign_QDnsMailExchangeRecord,
    array_QDnsMailExchangeRecord,
    copy_QDnsMailExchangeRecord,
    release_QDnsMailExchangeRecord,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
