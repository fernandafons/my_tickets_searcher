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
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQHostAddressConversionMode.cpp"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtNetwork/qhostaddress.sip"
#include <qhostaddress.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQHostAddressConversionMode.cpp"


extern "C" {static long slot_QHostAddress_ConversionMode___hash__(PyObject *);}
static long slot_QHostAddress_ConversionMode___hash__(PyObject *sipSelf)
{
     ::QHostAddress::ConversionMode *sipCpp = reinterpret_cast< ::QHostAddress::ConversionMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QHostAddress_ConversionMode));

    if (!sipCpp)
        return 0L;


    {
        {
            long sipRes = 0;

#line 116 "sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QHostAddress::ConversionMode::Int();
#line 51 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQHostAddressConversionMode.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QHostAddress_ConversionMode___bool__(PyObject *);}
static int slot_QHostAddress_ConversionMode___bool__(PyObject *sipSelf)
{
     ::QHostAddress::ConversionMode *sipCpp = reinterpret_cast< ::QHostAddress::ConversionMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QHostAddress_ConversionMode));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QHostAddress::ConversionMode::Int() != 0);
#line 76 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQHostAddressConversionMode.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QHostAddress_ConversionMode___ne__(PyObject *,PyObject *);}
static PyObject *slot_QHostAddress_ConversionMode___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QHostAddress::ConversionMode *sipCpp = reinterpret_cast< ::QHostAddress::ConversionMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QHostAddress_ConversionMode));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QHostAddress::ConversionMode* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QHostAddress_ConversionMode, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QHostAddress::ConversionMode::Int() != a0->operator QHostAddress::ConversionMode::Int());
#line 106 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQHostAddressConversionMode.cpp"
            sipReleaseType(const_cast< ::QHostAddress::ConversionMode *>(a0),sipType_QHostAddress_ConversionMode,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork, ne_slot, sipType_QHostAddress_ConversionMode, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QHostAddress_ConversionMode___eq__(PyObject *,PyObject *);}
static PyObject *slot_QHostAddress_ConversionMode___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QHostAddress::ConversionMode *sipCpp = reinterpret_cast< ::QHostAddress::ConversionMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QHostAddress_ConversionMode));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QHostAddress::ConversionMode* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QHostAddress_ConversionMode, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QHostAddress::ConversionMode::Int() == a0->operator QHostAddress::ConversionMode::Int());
#line 142 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQHostAddressConversionMode.cpp"
            sipReleaseType(const_cast< ::QHostAddress::ConversionMode *>(a0),sipType_QHostAddress_ConversionMode,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork, eq_slot, sipType_QHostAddress_ConversionMode, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QHostAddress_ConversionMode___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QHostAddress_ConversionMode___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QHostAddress_ConversionMode)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QHostAddress::ConversionMode *sipCpp = reinterpret_cast< ::QHostAddress::ConversionMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QHostAddress_ConversionMode));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QHostAddress::ConversionMode(*sipCpp ^ a0);
#line 181 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQHostAddressConversionMode.cpp"

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QHostAddress_ConversionMode___xor__(PyObject *,PyObject *);}
static PyObject *slot_QHostAddress_ConversionMode___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QHostAddress::ConversionMode* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QHostAddress_ConversionMode, &a0, &a0State, &a1))
        {
             ::QHostAddress::ConversionMode*sipRes;

            sipRes = new  ::QHostAddress::ConversionMode((*a0 ^ a1));
            sipReleaseType(a0,sipType_QHostAddress_ConversionMode,a0State);

            return sipConvertFromNewType(sipRes,sipType_QHostAddress_ConversionMode,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork, xor_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QHostAddress_ConversionMode___ior__(PyObject *,PyObject *);}
static PyObject *slot_QHostAddress_ConversionMode___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QHostAddress_ConversionMode)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QHostAddress::ConversionMode *sipCpp = reinterpret_cast< ::QHostAddress::ConversionMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QHostAddress_ConversionMode));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QHostAddress::ConversionMode(*sipCpp | a0);
#line 253 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQHostAddressConversionMode.cpp"

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QHostAddress_ConversionMode___or__(PyObject *,PyObject *);}
static PyObject *slot_QHostAddress_ConversionMode___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QHostAddress::ConversionMode* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QHostAddress_ConversionMode, &a0, &a0State, &a1))
        {
             ::QHostAddress::ConversionMode*sipRes;

            sipRes = new  ::QHostAddress::ConversionMode((*a0 | a1));
            sipReleaseType(a0,sipType_QHostAddress_ConversionMode,a0State);

            return sipConvertFromNewType(sipRes,sipType_QHostAddress_ConversionMode,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork, or_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QHostAddress_ConversionMode___iand__(PyObject *,PyObject *);}
static PyObject *slot_QHostAddress_ConversionMode___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QHostAddress_ConversionMode)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QHostAddress::ConversionMode *sipCpp = reinterpret_cast< ::QHostAddress::ConversionMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QHostAddress_ConversionMode));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QHostAddress::ConversionMode::operator&=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QHostAddress_ConversionMode___and__(PyObject *,PyObject *);}
static PyObject *slot_QHostAddress_ConversionMode___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QHostAddress::ConversionMode* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QHostAddress_ConversionMode, &a0, &a0State, &a1))
        {
             ::QHostAddress::ConversionMode*sipRes;

            sipRes = new  ::QHostAddress::ConversionMode((*a0 & a1));
            sipReleaseType(a0,sipType_QHostAddress_ConversionMode,a0State);

            return sipConvertFromNewType(sipRes,sipType_QHostAddress_ConversionMode,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork, and_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QHostAddress_ConversionMode___invert__(PyObject *);}
static PyObject *slot_QHostAddress_ConversionMode___invert__(PyObject *sipSelf)
{
     ::QHostAddress::ConversionMode *sipCpp = reinterpret_cast< ::QHostAddress::ConversionMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QHostAddress_ConversionMode));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::QHostAddress::ConversionMode*sipRes;

            sipRes = new  ::QHostAddress::ConversionMode(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QHostAddress_ConversionMode,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QHostAddress_ConversionMode___int__(PyObject *);}
static PyObject *slot_QHostAddress_ConversionMode___int__(PyObject *sipSelf)
{
     ::QHostAddress::ConversionMode *sipCpp = reinterpret_cast< ::QHostAddress::ConversionMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QHostAddress_ConversionMode));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
            int sipRes;

            sipRes = *sipCpp;

            return PyLong_FromLong(sipRes);
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QHostAddress_ConversionMode(void *, int);}
static void release_QHostAddress_ConversionMode(void *sipCppV, int)
{
    delete reinterpret_cast< ::QHostAddress::ConversionMode *>(sipCppV);
}


extern "C" {static void *array_QHostAddress_ConversionMode(Py_ssize_t);}
static void *array_QHostAddress_ConversionMode(Py_ssize_t sipNrElem)
{
    return new  ::QHostAddress::ConversionMode[sipNrElem];
}


extern "C" {static void assign_QHostAddress_ConversionMode(void *, Py_ssize_t, void *);}
static void assign_QHostAddress_ConversionMode(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QHostAddress::ConversionMode *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QHostAddress::ConversionMode *>(sipSrc);
}


extern "C" {static void *copy_QHostAddress_ConversionMode(const void *, Py_ssize_t);}
static void *copy_QHostAddress_ConversionMode(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QHostAddress::ConversionMode(reinterpret_cast<const  ::QHostAddress::ConversionMode *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QHostAddress_ConversionMode(sipSimpleWrapper *);}
static void dealloc_QHostAddress_ConversionMode(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QHostAddress_ConversionMode(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QHostAddress_ConversionMode(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QHostAddress_ConversionMode(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QHostAddress::ConversionMode *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QHostAddress::ConversionMode();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QHostAddress::ConversionMode(a0);

            return sipCpp;
        }
    }

    {
        const  ::QHostAddress::ConversionMode* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_QHostAddress_ConversionMode, &a0, &a0State))
        {
            sipCpp = new  ::QHostAddress::ConversionMode(*a0);
            sipReleaseType(const_cast< ::QHostAddress::ConversionMode *>(a0),sipType_QHostAddress_ConversionMode,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_QHostAddress_ConversionMode(PyObject *, void **, int *, PyObject *);}
static int convertTo_QHostAddress_ConversionMode(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QHostAddress::ConversionMode **sipCppPtr = reinterpret_cast< ::QHostAddress::ConversionMode **>(sipCppPtrV);

#line 121 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QHostAddress::ConversionMode is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QHostAddress_ConversionModeFlag)) ||
            sipCanConvertToType(sipPy, sipType_QHostAddress_ConversionMode, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QHostAddress_ConversionModeFlag)))
{
    *sipCppPtr = new QHostAddress::ConversionMode(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QHostAddress::ConversionMode *>(sipConvertToType(sipPy, sipType_QHostAddress_ConversionMode, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtNetwork/sipQtNetworkQHostAddressConversionMode.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QHostAddress_ConversionMode[] = {
    {(void *)slot_QHostAddress_ConversionMode___hash__, hash_slot},
    {(void *)slot_QHostAddress_ConversionMode___bool__, bool_slot},
    {(void *)slot_QHostAddress_ConversionMode___ne__, ne_slot},
    {(void *)slot_QHostAddress_ConversionMode___eq__, eq_slot},
    {(void *)slot_QHostAddress_ConversionMode___ixor__, ixor_slot},
    {(void *)slot_QHostAddress_ConversionMode___xor__, xor_slot},
    {(void *)slot_QHostAddress_ConversionMode___ior__, ior_slot},
    {(void *)slot_QHostAddress_ConversionMode___or__, or_slot},
    {(void *)slot_QHostAddress_ConversionMode___iand__, iand_slot},
    {(void *)slot_QHostAddress_ConversionMode___and__, and_slot},
    {(void *)slot_QHostAddress_ConversionMode___invert__, invert_slot},
    {(void *)slot_QHostAddress_ConversionMode___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QHostAddress_ConversionMode, "\1QHostAddress.ConversionMode()\n"
"QHostAddress.ConversionMode(Union[QHostAddress.ConversionMode, QHostAddress.ConversionModeFlag])\n"
"QHostAddress.ConversionMode(QHostAddress.ConversionMode)");


static pyqt5ClassPluginDef plugin_QHostAddress_ConversionMode = {
    SIP_NULLPTR,
    1,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtNetwork_QHostAddress_ConversionMode = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QHostAddress__ConversionMode,
        SIP_NULLPTR,
        &plugin_QHostAddress_ConversionMode
    },
    {
        sipNameNr_ConversionMode,
        {21, 255, 0},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QHostAddress_ConversionMode,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QHostAddress_ConversionMode,
    init_type_QHostAddress_ConversionMode,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QHostAddress_ConversionMode,
    assign_QHostAddress_ConversionMode,
    array_QHostAddress_ConversionMode,
    copy_QHostAddress_ConversionMode,
    release_QHostAddress_ConversionMode,
    SIP_NULLPTR,
    convertTo_QHostAddress_ConversionMode,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
