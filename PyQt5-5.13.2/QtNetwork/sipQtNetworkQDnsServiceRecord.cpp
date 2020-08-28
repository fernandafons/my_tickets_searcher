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

#line 75 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtNetwork/qdnslookup.sip"
#include <qdnslookup.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQDnsServiceRecord.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQDnsServiceRecord.cpp"


PyDoc_STRVAR(doc_QDnsServiceRecord_swap, "swap(self, QDnsServiceRecord)");

extern "C" {static PyObject *meth_QDnsServiceRecord_swap(PyObject *, PyObject *);}
static PyObject *meth_QDnsServiceRecord_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QDnsServiceRecord* a0;
         ::QDnsServiceRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDnsServiceRecord, &sipCpp, sipType_QDnsServiceRecord, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QDnsServiceRecord, sipName_swap, doc_QDnsServiceRecord_swap);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDnsServiceRecord_name, "name(self) -> str");

extern "C" {static PyObject *meth_QDnsServiceRecord_name(PyObject *, PyObject *);}
static PyObject *meth_QDnsServiceRecord_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDnsServiceRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsServiceRecord, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->name());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDnsServiceRecord, sipName_name, doc_QDnsServiceRecord_name);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDnsServiceRecord_port, "port(self) -> int");

extern "C" {static PyObject *meth_QDnsServiceRecord_port(PyObject *, PyObject *);}
static PyObject *meth_QDnsServiceRecord_port(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDnsServiceRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsServiceRecord, &sipCpp))
        {
             ::quint16 sipRes;

            sipRes = sipCpp->port();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDnsServiceRecord, sipName_port, doc_QDnsServiceRecord_port);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDnsServiceRecord_priority, "priority(self) -> int");

extern "C" {static PyObject *meth_QDnsServiceRecord_priority(PyObject *, PyObject *);}
static PyObject *meth_QDnsServiceRecord_priority(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDnsServiceRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsServiceRecord, &sipCpp))
        {
             ::quint16 sipRes;

            sipRes = sipCpp->priority();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDnsServiceRecord, sipName_priority, doc_QDnsServiceRecord_priority);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDnsServiceRecord_target, "target(self) -> str");

extern "C" {static PyObject *meth_QDnsServiceRecord_target(PyObject *, PyObject *);}
static PyObject *meth_QDnsServiceRecord_target(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDnsServiceRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsServiceRecord, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->target());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDnsServiceRecord, sipName_target, doc_QDnsServiceRecord_target);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDnsServiceRecord_timeToLive, "timeToLive(self) -> int");

extern "C" {static PyObject *meth_QDnsServiceRecord_timeToLive(PyObject *, PyObject *);}
static PyObject *meth_QDnsServiceRecord_timeToLive(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDnsServiceRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsServiceRecord, &sipCpp))
        {
             ::quint32 sipRes;

            sipRes = sipCpp->timeToLive();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDnsServiceRecord, sipName_timeToLive, doc_QDnsServiceRecord_timeToLive);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QDnsServiceRecord_weight, "weight(self) -> int");

extern "C" {static PyObject *meth_QDnsServiceRecord_weight(PyObject *, PyObject *);}
static PyObject *meth_QDnsServiceRecord_weight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDnsServiceRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsServiceRecord, &sipCpp))
        {
             ::quint16 sipRes;

            sipRes = sipCpp->weight();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QDnsServiceRecord, sipName_weight, doc_QDnsServiceRecord_weight);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDnsServiceRecord(void *, int);}
static void release_QDnsServiceRecord(void *sipCppV, int)
{
    delete reinterpret_cast< ::QDnsServiceRecord *>(sipCppV);
}


extern "C" {static void *array_QDnsServiceRecord(Py_ssize_t);}
static void *array_QDnsServiceRecord(Py_ssize_t sipNrElem)
{
    return new  ::QDnsServiceRecord[sipNrElem];
}


extern "C" {static void assign_QDnsServiceRecord(void *, Py_ssize_t, void *);}
static void assign_QDnsServiceRecord(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QDnsServiceRecord *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QDnsServiceRecord *>(sipSrc);
}


extern "C" {static void *copy_QDnsServiceRecord(const void *, Py_ssize_t);}
static void *copy_QDnsServiceRecord(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QDnsServiceRecord(reinterpret_cast<const  ::QDnsServiceRecord *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDnsServiceRecord(sipSimpleWrapper *);}
static void dealloc_QDnsServiceRecord(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QDnsServiceRecord(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QDnsServiceRecord(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDnsServiceRecord(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QDnsServiceRecord *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QDnsServiceRecord();

            return sipCpp;
        }
    }

    {
        const  ::QDnsServiceRecord* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QDnsServiceRecord, &a0))
        {
            sipCpp = new  ::QDnsServiceRecord(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_QDnsServiceRecord[] = {
    {sipName_name, meth_QDnsServiceRecord_name, METH_VARARGS, doc_QDnsServiceRecord_name},
    {sipName_port, meth_QDnsServiceRecord_port, METH_VARARGS, doc_QDnsServiceRecord_port},
    {sipName_priority, meth_QDnsServiceRecord_priority, METH_VARARGS, doc_QDnsServiceRecord_priority},
    {sipName_swap, meth_QDnsServiceRecord_swap, METH_VARARGS, doc_QDnsServiceRecord_swap},
    {sipName_target, meth_QDnsServiceRecord_target, METH_VARARGS, doc_QDnsServiceRecord_target},
    {sipName_timeToLive, meth_QDnsServiceRecord_timeToLive, METH_VARARGS, doc_QDnsServiceRecord_timeToLive},
    {sipName_weight, meth_QDnsServiceRecord_weight, METH_VARARGS, doc_QDnsServiceRecord_weight}
};

PyDoc_STRVAR(doc_QDnsServiceRecord, "\1QDnsServiceRecord()\n"
"QDnsServiceRecord(QDnsServiceRecord)");


static pyqt5ClassPluginDef plugin_QDnsServiceRecord = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtNetwork_QDnsServiceRecord = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QDnsServiceRecord,
        SIP_NULLPTR,
        &plugin_QDnsServiceRecord
    },
    {
        sipNameNr_QDnsServiceRecord,
        {0, 0, 1},
        7, methods_QDnsServiceRecord,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QDnsServiceRecord,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_QDnsServiceRecord,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QDnsServiceRecord,
    assign_QDnsServiceRecord,
    array_QDnsServiceRecord,
    copy_QDnsServiceRecord,
    release_QDnsServiceRecord,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
