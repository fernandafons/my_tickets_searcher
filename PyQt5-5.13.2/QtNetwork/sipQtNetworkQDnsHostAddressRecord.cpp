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

#line 42 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtNetwork/qdnslookup.sip"
#include <qdnslookup.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQDnsHostAddressRecord.cpp"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtNetwork/qhostaddress.sip"
#include <qhostaddress.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQDnsHostAddressRecord.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQDnsHostAddressRecord.cpp"


PyDoc_STRVAR(doc_QDnsHostAddressRecord_swap, "swap(self, QDnsHostAddressRecord)");

extern "C" {static PyObject *meth_QDnsHostAddressRecord_swap(PyObject *, PyObject *);}
static PyObject *meth_QDnsHostAddressRecord_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QDnsHostAddressRecord* a0;
         ::QDnsHostAddressRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDnsHostAddressRecord, &sipCpp, sipType_QDnsHostAddressRecord, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QDnsHostAddressRecord, sipName_swap, doc_QDnsHostAddressRecord_swap);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDnsHostAddressRecord_name, "name(self) -> str");

extern "C" {static PyObject *meth_QDnsHostAddressRecord_name(PyObject *, PyObject *);}
static PyObject *meth_QDnsHostAddressRecord_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDnsHostAddressRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsHostAddressRecord, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->name());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDnsHostAddressRecord, sipName_name, doc_QDnsHostAddressRecord_name);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDnsHostAddressRecord_timeToLive, "timeToLive(self) -> int");

extern "C" {static PyObject *meth_QDnsHostAddressRecord_timeToLive(PyObject *, PyObject *);}
static PyObject *meth_QDnsHostAddressRecord_timeToLive(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDnsHostAddressRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsHostAddressRecord, &sipCpp))
        {
             ::quint32 sipRes;

            sipRes = sipCpp->timeToLive();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDnsHostAddressRecord, sipName_timeToLive, doc_QDnsHostAddressRecord_timeToLive);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDnsHostAddressRecord_value, "value(self) -> QHostAddress");

extern "C" {static PyObject *meth_QDnsHostAddressRecord_value(PyObject *, PyObject *);}
static PyObject *meth_QDnsHostAddressRecord_value(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDnsHostAddressRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsHostAddressRecord, &sipCpp))
        {
             ::QHostAddress*sipRes;

            sipRes = new  ::QHostAddress(sipCpp->value());

            return sipConvertFromNewType(sipRes,sipType_QHostAddress,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDnsHostAddressRecord, sipName_value, doc_QDnsHostAddressRecord_value);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDnsHostAddressRecord(void *, int);}
static void release_QDnsHostAddressRecord(void *sipCppV, int)
{
    delete reinterpret_cast< ::QDnsHostAddressRecord *>(sipCppV);
}


extern "C" {static void *array_QDnsHostAddressRecord(Py_ssize_t);}
static void *array_QDnsHostAddressRecord(Py_ssize_t sipNrElem)
{
    return new  ::QDnsHostAddressRecord[sipNrElem];
}


extern "C" {static void assign_QDnsHostAddressRecord(void *, Py_ssize_t, void *);}
static void assign_QDnsHostAddressRecord(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QDnsHostAddressRecord *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QDnsHostAddressRecord *>(sipSrc);
}


extern "C" {static void *copy_QDnsHostAddressRecord(const void *, Py_ssize_t);}
static void *copy_QDnsHostAddressRecord(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QDnsHostAddressRecord(reinterpret_cast<const  ::QDnsHostAddressRecord *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDnsHostAddressRecord(sipSimpleWrapper *);}
static void dealloc_QDnsHostAddressRecord(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QDnsHostAddressRecord(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QDnsHostAddressRecord(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDnsHostAddressRecord(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QDnsHostAddressRecord *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QDnsHostAddressRecord();

            return sipCpp;
        }
    }

    {
        const  ::QDnsHostAddressRecord* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QDnsHostAddressRecord, &a0))
        {
            sipCpp = new  ::QDnsHostAddressRecord(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_QDnsHostAddressRecord[] = {
    {sipName_name, meth_QDnsHostAddressRecord_name, METH_VARARGS, doc_QDnsHostAddressRecord_name},
    {sipName_swap, meth_QDnsHostAddressRecord_swap, METH_VARARGS, doc_QDnsHostAddressRecord_swap},
    {sipName_timeToLive, meth_QDnsHostAddressRecord_timeToLive, METH_VARARGS, doc_QDnsHostAddressRecord_timeToLive},
    {sipName_value, meth_QDnsHostAddressRecord_value, METH_VARARGS, doc_QDnsHostAddressRecord_value}
};

PyDoc_STRVAR(doc_QDnsHostAddressRecord, "\1QDnsHostAddressRecord()\n"
"QDnsHostAddressRecord(QDnsHostAddressRecord)");


static pyqt5ClassPluginDef plugin_QDnsHostAddressRecord = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtNetwork_QDnsHostAddressRecord = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QDnsHostAddressRecord,
        SIP_NULLPTR,
        &plugin_QDnsHostAddressRecord
    },
    {
        sipNameNr_QDnsHostAddressRecord,
        {0, 0, 1},
        4, methods_QDnsHostAddressRecord,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QDnsHostAddressRecord,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_QDnsHostAddressRecord,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QDnsHostAddressRecord,
    assign_QDnsHostAddressRecord,
    array_QDnsHostAddressRecord,
    copy_QDnsHostAddressRecord,
    release_QDnsHostAddressRecord,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};