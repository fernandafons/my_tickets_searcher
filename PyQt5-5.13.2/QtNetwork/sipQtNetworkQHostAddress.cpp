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

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtNetwork/qhostaddress.sip"
#include <qhostaddress.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQHostAddress.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQHostAddress.cpp"
#line 147 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtNetwork/qhostaddress.sip"
#include <qhostaddress.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQHostAddress.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtNetwork/qhostaddress.sip"
#include <qhostaddress.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQHostAddress.cpp"
#line 143 "sip/QtCore/qpycore_qpair.sip"
#include <qpair.h>
#line 42 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQHostAddress.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtNetwork/qabstractsocket.sip"
#include <qabstractsocket.h>
#line 45 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQHostAddress.cpp"


PyDoc_STRVAR(doc_QHostAddress_setAddress, "setAddress(self, QHostAddress.SpecialAddress)\n"
"setAddress(self, int)\n"
"setAddress(self, str) -> bool\n"
"setAddress(self, Tuple[int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int])");

extern "C" {static PyObject *meth_QHostAddress_setAddress(PyObject *, PyObject *);}
static PyObject *meth_QHostAddress_setAddress(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QHostAddress::SpecialAddress a0;
         ::QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BXE", &sipSelf, sipType_QHostAddress, &sipCpp, sipType_QHostAddress_SpecialAddress, &a0))
        {
            sipCpp->setAddress(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
         ::quint32 a0;
         ::QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bu", &sipSelf, sipType_QHostAddress, &sipCpp, &a0))
        {
            sipCpp->setAddress(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QHostAddress, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->setAddress(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const  ::Q_IPV6ADDR* a0;
        int a0State = 0;
         ::QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QHostAddress, &sipCpp, sipType_Q_IPV6ADDR,&a0, &a0State))
        {
            sipCpp->setAddress(*a0);
            sipReleaseType(const_cast< ::Q_IPV6ADDR *>(a0),sipType_Q_IPV6ADDR,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QHostAddress, sipName_setAddress, doc_QHostAddress_setAddress);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QHostAddress_protocol, "protocol(self) -> QAbstractSocket.NetworkLayerProtocol");

extern "C" {static PyObject *meth_QHostAddress_protocol(PyObject *, PyObject *);}
static PyObject *meth_QHostAddress_protocol(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHostAddress, &sipCpp))
        {
             ::QAbstractSocket::NetworkLayerProtocol sipRes;

            sipRes = sipCpp->protocol();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QAbstractSocket_NetworkLayerProtocol);
        }
    }

    sipNoMethod(sipParseErr, sipName_QHostAddress, sipName_protocol, doc_QHostAddress_protocol);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QHostAddress_toIPv4Address, "toIPv4Address(self) -> int");

extern "C" {static PyObject *meth_QHostAddress_toIPv4Address(PyObject *, PyObject *);}
static PyObject *meth_QHostAddress_toIPv4Address(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHostAddress, &sipCpp))
        {
             ::quint32 sipRes;

            sipRes = sipCpp->toIPv4Address();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QHostAddress, sipName_toIPv4Address, doc_QHostAddress_toIPv4Address);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QHostAddress_toIPv6Address, "toIPv6Address(self) -> Tuple[int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int]");

extern "C" {static PyObject *meth_QHostAddress_toIPv6Address(PyObject *, PyObject *);}
static PyObject *meth_QHostAddress_toIPv6Address(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHostAddress, &sipCpp))
        {
             ::Q_IPV6ADDR*sipRes;

            sipRes = new  ::Q_IPV6ADDR(sipCpp->toIPv6Address());

            return sipConvertFromNewType(sipRes,sipType_Q_IPV6ADDR,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QHostAddress, sipName_toIPv6Address, doc_QHostAddress_toIPv6Address);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QHostAddress_toString, "toString(self) -> str");

extern "C" {static PyObject *meth_QHostAddress_toString(PyObject *, PyObject *);}
static PyObject *meth_QHostAddress_toString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHostAddress, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->toString());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QHostAddress, sipName_toString, doc_QHostAddress_toString);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QHostAddress_scopeId, "scopeId(self) -> str");

extern "C" {static PyObject *meth_QHostAddress_scopeId(PyObject *, PyObject *);}
static PyObject *meth_QHostAddress_scopeId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHostAddress, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->scopeId());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QHostAddress, sipName_scopeId, doc_QHostAddress_scopeId);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QHostAddress_setScopeId, "setScopeId(self, str)");

extern "C" {static PyObject *meth_QHostAddress_setScopeId(PyObject *, PyObject *);}
static PyObject *meth_QHostAddress_setScopeId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QHostAddress, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setScopeId(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QHostAddress, sipName_setScopeId, doc_QHostAddress_setScopeId);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QHostAddress_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QHostAddress_isNull(PyObject *, PyObject *);}
static PyObject *meth_QHostAddress_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHostAddress, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QHostAddress, sipName_isNull, doc_QHostAddress_isNull);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QHostAddress_clear, "clear(self)");

extern "C" {static PyObject *meth_QHostAddress_clear(PyObject *, PyObject *);}
static PyObject *meth_QHostAddress_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHostAddress, &sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QHostAddress, sipName_clear, doc_QHostAddress_clear);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QHostAddress_isInSubnet, "isInSubnet(self, Union[QHostAddress, QHostAddress.SpecialAddress], int) -> bool\n"
"isInSubnet(self, Tuple[Union[QHostAddress, QHostAddress.SpecialAddress], int]) -> bool");

extern "C" {static PyObject *meth_QHostAddress_isInSubnet(PyObject *, PyObject *);}
static PyObject *meth_QHostAddress_isInSubnet(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QHostAddress* a0;
        int a0State = 0;
        int a1;
        const  ::QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1i", &sipSelf, sipType_QHostAddress, &sipCpp, sipType_QHostAddress, &a0, &a0State, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->isInSubnet(*a0,a1);
            sipReleaseType(const_cast< ::QHostAddress *>(a0),sipType_QHostAddress,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QPair< ::QHostAddress,int>* a0;
        int a0State = 0;
        const  ::QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QHostAddress, &sipCpp, sipType_QPair_0100QHostAddress_1800,&a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->isInSubnet(*a0);
            sipReleaseType(const_cast<QPair< ::QHostAddress,int> *>(a0),sipType_QPair_0100QHostAddress_1800,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QHostAddress, sipName_isInSubnet, doc_QHostAddress_isInSubnet);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QHostAddress_isLoopback, "isLoopback(self) -> bool");

extern "C" {static PyObject *meth_QHostAddress_isLoopback(PyObject *, PyObject *);}
static PyObject *meth_QHostAddress_isLoopback(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHostAddress, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isLoopback();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QHostAddress, sipName_isLoopback, doc_QHostAddress_isLoopback);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QHostAddress_parseSubnet, "parseSubnet(str) -> Tuple[QHostAddress, int]");

extern "C" {static PyObject *meth_QHostAddress_parseSubnet(PyObject *, PyObject *);}
static PyObject *meth_QHostAddress_parseSubnet(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            QPair< ::QHostAddress,int>*sipRes;

            sipRes = new QPair< ::QHostAddress,int>( ::QHostAddress::parseSubnet(*a0));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QPair_0100QHostAddress_1800,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QHostAddress, sipName_parseSubnet, doc_QHostAddress_parseSubnet);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QHostAddress_swap, "swap(self, QHostAddress)");

extern "C" {static PyObject *meth_QHostAddress_swap(PyObject *, PyObject *);}
static PyObject *meth_QHostAddress_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QHostAddress* a0;
         ::QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QHostAddress, &sipCpp, sipType_QHostAddress, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QHostAddress, sipName_swap, doc_QHostAddress_swap);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QHostAddress_isMulticast, "isMulticast(self) -> bool");

extern "C" {static PyObject *meth_QHostAddress_isMulticast(PyObject *, PyObject *);}
static PyObject *meth_QHostAddress_isMulticast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHostAddress, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isMulticast();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QHostAddress, sipName_isMulticast, doc_QHostAddress_isMulticast);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QHostAddress_isEqual, "isEqual(self, Union[QHostAddress, QHostAddress.SpecialAddress], mode: Union[QHostAddress.ConversionMode, QHostAddress.ConversionModeFlag] = QHostAddress.TolerantConversion) -> bool");

extern "C" {static PyObject *meth_QHostAddress_isEqual(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QHostAddress_isEqual(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QHostAddress* a0;
        int a0State = 0;
         ::QHostAddress::ConversionMode a1def = QHostAddress::TolerantConversion;
         ::QHostAddress::ConversionMode* a1 = &a1def;
        int a1State = 0;
        const  ::QHostAddress *sipCpp;

        static const char *sipKwdList[] = {
            SIP_NULLPTR,
            sipName_mode,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1|J1", &sipSelf, sipType_QHostAddress, &sipCpp, sipType_QHostAddress, &a0, &a0State, sipType_QHostAddress_ConversionMode, &a1, &a1State))
        {
            bool sipRes;

            sipRes = sipCpp->isEqual(*a0,*a1);
            sipReleaseType(const_cast< ::QHostAddress *>(a0),sipType_QHostAddress,a0State);
            sipReleaseType(a1,sipType_QHostAddress_ConversionMode,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QHostAddress, sipName_isEqual, doc_QHostAddress_isEqual);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QHostAddress_isGlobal, "isGlobal(self) -> bool");

extern "C" {static PyObject *meth_QHostAddress_isGlobal(PyObject *, PyObject *);}
static PyObject *meth_QHostAddress_isGlobal(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHostAddress, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isGlobal();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QHostAddress, sipName_isGlobal, doc_QHostAddress_isGlobal);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QHostAddress_isLinkLocal, "isLinkLocal(self) -> bool");

extern "C" {static PyObject *meth_QHostAddress_isLinkLocal(PyObject *, PyObject *);}
static PyObject *meth_QHostAddress_isLinkLocal(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHostAddress, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isLinkLocal();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QHostAddress, sipName_isLinkLocal, doc_QHostAddress_isLinkLocal);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QHostAddress_isSiteLocal, "isSiteLocal(self) -> bool");

extern "C" {static PyObject *meth_QHostAddress_isSiteLocal(PyObject *, PyObject *);}
static PyObject *meth_QHostAddress_isSiteLocal(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHostAddress, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isSiteLocal();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QHostAddress, sipName_isSiteLocal, doc_QHostAddress_isSiteLocal);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QHostAddress_isUniqueLocalUnicast, "isUniqueLocalUnicast(self) -> bool");

extern "C" {static PyObject *meth_QHostAddress_isUniqueLocalUnicast(PyObject *, PyObject *);}
static PyObject *meth_QHostAddress_isUniqueLocalUnicast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHostAddress, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isUniqueLocalUnicast();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QHostAddress, sipName_isUniqueLocalUnicast, doc_QHostAddress_isUniqueLocalUnicast);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QHostAddress_isBroadcast, "isBroadcast(self) -> bool");

extern "C" {static PyObject *meth_QHostAddress_isBroadcast(PyObject *, PyObject *);}
static PyObject *meth_QHostAddress_isBroadcast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHostAddress, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isBroadcast();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QHostAddress, sipName_isBroadcast, doc_QHostAddress_isBroadcast);

    return SIP_NULLPTR;
}


extern "C" {static long slot_QHostAddress___hash__(PyObject *);}
static long slot_QHostAddress___hash__(PyObject *sipSelf)
{
     ::QHostAddress *sipCpp = reinterpret_cast< ::QHostAddress *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QHostAddress));

    if (!sipCpp)
        return 0L;


    {
        {
            long sipRes = 0;

#line 88 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtNetwork/qhostaddress.sip"
        sipRes = qHash(*sipCpp);
#line 690 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQHostAddress.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QHostAddress___ne__(PyObject *,PyObject *);}
static PyObject *slot_QHostAddress___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QHostAddress *sipCpp = reinterpret_cast< ::QHostAddress *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QHostAddress));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QHostAddress* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QHostAddress, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QHostAddress::operator!=(*a0);
            sipReleaseType(const_cast< ::QHostAddress *>(a0),sipType_QHostAddress,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    {
         ::QHostAddress::SpecialAddress a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1E", sipType_QHostAddress_SpecialAddress, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QHostAddress::operator!=(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork, ne_slot, sipType_QHostAddress, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QHostAddress___eq__(PyObject *,PyObject *);}
static PyObject *slot_QHostAddress___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QHostAddress *sipCpp = reinterpret_cast< ::QHostAddress *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QHostAddress));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QHostAddress* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QHostAddress, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QHostAddress::operator==(*a0);
            sipReleaseType(const_cast< ::QHostAddress *>(a0),sipType_QHostAddress,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    {
         ::QHostAddress::SpecialAddress a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1E", sipType_QHostAddress_SpecialAddress, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QHostAddress::operator==(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork, eq_slot, sipType_QHostAddress, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QHostAddress(void *, int);}
static void release_QHostAddress(void *sipCppV, int)
{
    delete reinterpret_cast< ::QHostAddress *>(sipCppV);
}


extern "C" {static void *array_QHostAddress(Py_ssize_t);}
static void *array_QHostAddress(Py_ssize_t sipNrElem)
{
    return new  ::QHostAddress[sipNrElem];
}


extern "C" {static void assign_QHostAddress(void *, Py_ssize_t, void *);}
static void assign_QHostAddress(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QHostAddress *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QHostAddress *>(sipSrc);
}


extern "C" {static void *copy_QHostAddress(const void *, Py_ssize_t);}
static void *copy_QHostAddress(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QHostAddress(reinterpret_cast<const  ::QHostAddress *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QHostAddress(sipSimpleWrapper *);}
static void dealloc_QHostAddress(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QHostAddress(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QHostAddress(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QHostAddress(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QHostAddress *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QHostAddress();

            return sipCpp;
        }
    }

    {
         ::QHostAddress::SpecialAddress a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "XE", sipType_QHostAddress_SpecialAddress, &a0))
        {
            sipCpp = new  ::QHostAddress(a0);

            return sipCpp;
        }
    }

    {
         ::quint32 a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "u", &a0))
        {
            sipCpp = new  ::QHostAddress(a0);

            return sipCpp;
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_QString,&a0, &a0State))
        {
            sipCpp = new  ::QHostAddress(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipCpp;
        }
    }

    {
        const  ::Q_IPV6ADDR* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_Q_IPV6ADDR,&a0, &a0State))
        {
            sipCpp = new  ::QHostAddress(*a0);
            sipReleaseType(const_cast< ::Q_IPV6ADDR *>(a0),sipType_Q_IPV6ADDR,a0State);

            return sipCpp;
        }
    }

    {
        const  ::QHostAddress* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_QHostAddress, &a0, &a0State))
        {
            sipCpp = new  ::QHostAddress(*a0);
            sipReleaseType(const_cast< ::QHostAddress *>(a0),sipType_QHostAddress,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_QHostAddress(PyObject *, void **, int *, PyObject *);}
static int convertTo_QHostAddress(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QHostAddress **sipCppPtr = reinterpret_cast< ::QHostAddress **>(sipCppPtrV);

#line 30 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtNetwork/qhostaddress.sip"
// SIP doesn't support automatic type convertors so we explicitly allow a
// QHostAddress::SpecialAddress to be used whenever a QHostAddress is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QHostAddress_SpecialAddress)) ||
            sipCanConvertToType(sipPy, sipType_QHostAddress, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QHostAddress_SpecialAddress)))
{
    *sipCppPtr = new QHostAddress((QHostAddress::SpecialAddress)SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QHostAddress *>(sipConvertToType(sipPy, sipType_QHostAddress, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 935 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQHostAddress.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QHostAddress[] = {
    {(void *)slot_QHostAddress___hash__, hash_slot},
    {(void *)slot_QHostAddress___ne__, ne_slot},
    {(void *)slot_QHostAddress___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QHostAddress[] = {
    {sipName_clear, meth_QHostAddress_clear, METH_VARARGS, doc_QHostAddress_clear},
    {sipName_isBroadcast, meth_QHostAddress_isBroadcast, METH_VARARGS, doc_QHostAddress_isBroadcast},
    {sipName_isEqual, SIP_MLMETH_CAST(meth_QHostAddress_isEqual), METH_VARARGS|METH_KEYWORDS, doc_QHostAddress_isEqual},
    {sipName_isGlobal, meth_QHostAddress_isGlobal, METH_VARARGS, doc_QHostAddress_isGlobal},
    {sipName_isInSubnet, meth_QHostAddress_isInSubnet, METH_VARARGS, doc_QHostAddress_isInSubnet},
    {sipName_isLinkLocal, meth_QHostAddress_isLinkLocal, METH_VARARGS, doc_QHostAddress_isLinkLocal},
    {sipName_isLoopback, meth_QHostAddress_isLoopback, METH_VARARGS, doc_QHostAddress_isLoopback},
    {sipName_isMulticast, meth_QHostAddress_isMulticast, METH_VARARGS, doc_QHostAddress_isMulticast},
    {sipName_isNull, meth_QHostAddress_isNull, METH_VARARGS, doc_QHostAddress_isNull},
    {sipName_isSiteLocal, meth_QHostAddress_isSiteLocal, METH_VARARGS, doc_QHostAddress_isSiteLocal},
    {sipName_isUniqueLocalUnicast, meth_QHostAddress_isUniqueLocalUnicast, METH_VARARGS, doc_QHostAddress_isUniqueLocalUnicast},
    {sipName_parseSubnet, meth_QHostAddress_parseSubnet, METH_VARARGS, doc_QHostAddress_parseSubnet},
    {sipName_protocol, meth_QHostAddress_protocol, METH_VARARGS, doc_QHostAddress_protocol},
    {sipName_scopeId, meth_QHostAddress_scopeId, METH_VARARGS, doc_QHostAddress_scopeId},
    {sipName_setAddress, meth_QHostAddress_setAddress, METH_VARARGS, doc_QHostAddress_setAddress},
    {sipName_setScopeId, meth_QHostAddress_setScopeId, METH_VARARGS, doc_QHostAddress_setScopeId},
    {sipName_swap, meth_QHostAddress_swap, METH_VARARGS, doc_QHostAddress_swap},
    {sipName_toIPv4Address, meth_QHostAddress_toIPv4Address, METH_VARARGS, doc_QHostAddress_toIPv4Address},
    {sipName_toIPv6Address, meth_QHostAddress_toIPv6Address, METH_VARARGS, doc_QHostAddress_toIPv6Address},
    {sipName_toString, meth_QHostAddress_toString, METH_VARARGS, doc_QHostAddress_toString}
};

static sipEnumMemberDef enummembers_QHostAddress[] = {
    {sipName_Any, static_cast<int>( ::QHostAddress::Any), 24},
    {sipName_AnyIPv4, static_cast<int>( ::QHostAddress::AnyIPv4), 24},
    {sipName_AnyIPv6, static_cast<int>( ::QHostAddress::AnyIPv6), 24},
    {sipName_Broadcast, static_cast<int>( ::QHostAddress::Broadcast), 24},
    {sipName_ConvertLocalHost, static_cast<int>( ::QHostAddress::ConvertLocalHost), 23},
    {sipName_ConvertUnspecifiedAddress, static_cast<int>( ::QHostAddress::ConvertUnspecifiedAddress), 23},
    {sipName_ConvertV4CompatToIPv4, static_cast<int>( ::QHostAddress::ConvertV4CompatToIPv4), 23},
    {sipName_ConvertV4MappedToIPv4, static_cast<int>( ::QHostAddress::ConvertV4MappedToIPv4), 23},
    {sipName_LocalHost, static_cast<int>( ::QHostAddress::LocalHost), 24},
    {sipName_LocalHostIPv6, static_cast<int>( ::QHostAddress::LocalHostIPv6), 24},
    {sipName_Null, static_cast<int>( ::QHostAddress::Null), 24},
    {sipName_StrictConversion, static_cast<int>( ::QHostAddress::StrictConversion), 23},
    {sipName_TolerantConversion, static_cast<int>( ::QHostAddress::TolerantConversion), 23},
};

PyDoc_STRVAR(doc_QHostAddress, "\1QHostAddress()\n"
"QHostAddress(QHostAddress.SpecialAddress)\n"
"QHostAddress(int)\n"
"QHostAddress(str)\n"
"QHostAddress(Tuple[int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int])\n"
"QHostAddress(Union[QHostAddress, QHostAddress.SpecialAddress])");


static pyqt5ClassPluginDef plugin_QHostAddress = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtNetwork_QHostAddress = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QHostAddress,
        SIP_NULLPTR,
        &plugin_QHostAddress
    },
    {
        sipNameNr_QHostAddress,
        {0, 0, 1},
        20, methods_QHostAddress,
        13, enummembers_QHostAddress,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QHostAddress,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QHostAddress,
    init_type_QHostAddress,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QHostAddress,
    assign_QHostAddress,
    array_QHostAddress,
    copy_QHostAddress,
    release_QHostAddress,
    SIP_NULLPTR,
    convertTo_QHostAddress,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
