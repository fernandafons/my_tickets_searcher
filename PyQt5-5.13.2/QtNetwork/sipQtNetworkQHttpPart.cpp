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

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtNetwork/qhttpmultipart.sip"
#include <qhttpmultipart.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQHttpPart.cpp"

#line 26 "sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQHttpPart.cpp"
#line 30 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQHttpPart.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtNetwork/qnetworkrequest.sip"
#include <qnetworkrequest.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQHttpPart.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 42 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQHttpPart.cpp"


PyDoc_STRVAR(doc_QHttpPart_setHeader, "setHeader(self, QNetworkRequest.KnownHeaders, Any)");

extern "C" {static PyObject *meth_QHttpPart_setHeader(PyObject *, PyObject *);}
static PyObject *meth_QHttpPart_setHeader(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QNetworkRequest::KnownHeaders a0;
        const  ::QVariant* a1;
        int a1State = 0;
         ::QHttpPart *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEJ1", &sipSelf, sipType_QHttpPart, &sipCpp, sipType_QNetworkRequest_KnownHeaders, &a0, sipType_QVariant, &a1, &a1State))
        {
            sipCpp->setHeader(a0,*a1);
            sipReleaseType(const_cast< ::QVariant *>(a1),sipType_QVariant,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QHttpPart, sipName_setHeader, doc_QHttpPart_setHeader);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QHttpPart_setRawHeader, "setRawHeader(self, Union[QByteArray, bytes, bytearray], Union[QByteArray, bytes, bytearray])");

extern "C" {static PyObject *meth_QHttpPart_setRawHeader(PyObject *, PyObject *);}
static PyObject *meth_QHttpPart_setRawHeader(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QByteArray* a0;
        int a0State = 0;
        const  ::QByteArray* a1;
        int a1State = 0;
         ::QHttpPart *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QHttpPart, &sipCpp, sipType_QByteArray, &a0, &a0State, sipType_QByteArray, &a1, &a1State))
        {
            sipCpp->setRawHeader(*a0,*a1);
            sipReleaseType(const_cast< ::QByteArray *>(a0),sipType_QByteArray,a0State);
            sipReleaseType(const_cast< ::QByteArray *>(a1),sipType_QByteArray,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QHttpPart, sipName_setRawHeader, doc_QHttpPart_setRawHeader);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QHttpPart_setBody, "setBody(self, Union[QByteArray, bytes, bytearray])");

extern "C" {static PyObject *meth_QHttpPart_setBody(PyObject *, PyObject *);}
static PyObject *meth_QHttpPart_setBody(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QByteArray* a0;
        int a0State = 0;
         ::QHttpPart *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QHttpPart, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            sipCpp->setBody(*a0);
            sipReleaseType(const_cast< ::QByteArray *>(a0),sipType_QByteArray,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QHttpPart, sipName_setBody, doc_QHttpPart_setBody);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QHttpPart_setBodyDevice, "setBodyDevice(self, QIODevice)");

extern "C" {static PyObject *meth_QHttpPart_setBodyDevice(PyObject *, PyObject *);}
static PyObject *meth_QHttpPart_setBodyDevice(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QIODevice* a0;
         ::QHttpPart *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QHttpPart, &sipCpp, sipType_QIODevice, &a0))
        {
            sipCpp->setBodyDevice(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QHttpPart, sipName_setBodyDevice, doc_QHttpPart_setBodyDevice);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QHttpPart_swap, "swap(self, QHttpPart)");

extern "C" {static PyObject *meth_QHttpPart_swap(PyObject *, PyObject *);}
static PyObject *meth_QHttpPart_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QHttpPart* a0;
         ::QHttpPart *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QHttpPart, &sipCpp, sipType_QHttpPart, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QHttpPart, sipName_swap, doc_QHttpPart_swap);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_QHttpPart___ne__(PyObject *,PyObject *);}
static PyObject *slot_QHttpPart___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QHttpPart *sipCpp = reinterpret_cast< ::QHttpPart *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QHttpPart));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QHttpPart* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QHttpPart, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QHttpPart::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork, ne_slot, sipType_QHttpPart, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QHttpPart___eq__(PyObject *,PyObject *);}
static PyObject *slot_QHttpPart___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QHttpPart *sipCpp = reinterpret_cast< ::QHttpPart *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QHttpPart));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QHttpPart* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QHttpPart, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QHttpPart::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork, eq_slot, sipType_QHttpPart, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QHttpPart(void *, int);}
static void release_QHttpPart(void *sipCppV, int)
{
    delete reinterpret_cast< ::QHttpPart *>(sipCppV);
}


extern "C" {static void *array_QHttpPart(Py_ssize_t);}
static void *array_QHttpPart(Py_ssize_t sipNrElem)
{
    return new  ::QHttpPart[sipNrElem];
}


extern "C" {static void assign_QHttpPart(void *, Py_ssize_t, void *);}
static void assign_QHttpPart(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QHttpPart *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QHttpPart *>(sipSrc);
}


extern "C" {static void *copy_QHttpPart(const void *, Py_ssize_t);}
static void *copy_QHttpPart(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QHttpPart(reinterpret_cast<const  ::QHttpPart *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QHttpPart(sipSimpleWrapper *);}
static void dealloc_QHttpPart(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QHttpPart(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QHttpPart(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QHttpPart(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QHttpPart *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QHttpPart();

            return sipCpp;
        }
    }

    {
        const  ::QHttpPart* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QHttpPart, &a0))
        {
            sipCpp = new  ::QHttpPart(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QHttpPart[] = {
    {(void *)slot_QHttpPart___ne__, ne_slot},
    {(void *)slot_QHttpPart___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QHttpPart[] = {
    {sipName_setBody, meth_QHttpPart_setBody, METH_VARARGS, doc_QHttpPart_setBody},
    {sipName_setBodyDevice, meth_QHttpPart_setBodyDevice, METH_VARARGS, doc_QHttpPart_setBodyDevice},
    {sipName_setHeader, meth_QHttpPart_setHeader, METH_VARARGS, doc_QHttpPart_setHeader},
    {sipName_setRawHeader, meth_QHttpPart_setRawHeader, METH_VARARGS, doc_QHttpPart_setRawHeader},
    {sipName_swap, meth_QHttpPart_swap, METH_VARARGS, doc_QHttpPart_swap}
};

PyDoc_STRVAR(doc_QHttpPart, "\1QHttpPart()\n"
"QHttpPart(QHttpPart)");


static pyqt5ClassPluginDef plugin_QHttpPart = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtNetwork_QHttpPart = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QHttpPart,
        SIP_NULLPTR,
        &plugin_QHttpPart
    },
    {
        sipNameNr_QHttpPart,
        {0, 0, 1},
        5, methods_QHttpPart,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QHttpPart,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QHttpPart,
    init_type_QHttpPart,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QHttpPart,
    assign_QHttpPart,
    array_QHttpPart,
    copy_QHttpPart,
    release_QHttpPart,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
