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

#line 30 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQByteArrayBase64Options.cpp"

#line 30 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQByteArrayBase64Options.cpp"


extern "C" {static long slot_QByteArray_Base64Options___hash__(PyObject *);}
static long slot_QByteArray_Base64Options___hash__(PyObject *sipSelf)
{
     ::QByteArray::Base64Options *sipCpp = reinterpret_cast< ::QByteArray::Base64Options *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QByteArray_Base64Options));

    if (!sipCpp)
        return 0L;


    {
        {
            long sipRes = 0;

#line 116 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QByteArray::Base64Options::Int();
#line 51 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQByteArrayBase64Options.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QByteArray_Base64Options___bool__(PyObject *);}
static int slot_QByteArray_Base64Options___bool__(PyObject *sipSelf)
{
     ::QByteArray::Base64Options *sipCpp = reinterpret_cast< ::QByteArray::Base64Options *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QByteArray_Base64Options));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QByteArray::Base64Options::Int() != 0);
#line 76 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQByteArrayBase64Options.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QByteArray_Base64Options___ne__(PyObject *,PyObject *);}
static PyObject *slot_QByteArray_Base64Options___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QByteArray::Base64Options *sipCpp = reinterpret_cast< ::QByteArray::Base64Options *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QByteArray_Base64Options));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QByteArray::Base64Options* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QByteArray_Base64Options, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QByteArray::Base64Options::Int() != a0->operator QByteArray::Base64Options::Int());
#line 106 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQByteArrayBase64Options.cpp"
            sipReleaseType(const_cast< ::QByteArray::Base64Options *>(a0),sipType_QByteArray_Base64Options,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QByteArray_Base64Options, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QByteArray_Base64Options___eq__(PyObject *,PyObject *);}
static PyObject *slot_QByteArray_Base64Options___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QByteArray::Base64Options *sipCpp = reinterpret_cast< ::QByteArray::Base64Options *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QByteArray_Base64Options));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QByteArray::Base64Options* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QByteArray_Base64Options, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QByteArray::Base64Options::Int() == a0->operator QByteArray::Base64Options::Int());
#line 142 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQByteArrayBase64Options.cpp"
            sipReleaseType(const_cast< ::QByteArray::Base64Options *>(a0),sipType_QByteArray_Base64Options,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QByteArray_Base64Options, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QByteArray_Base64Options___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QByteArray_Base64Options___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QByteArray_Base64Options)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QByteArray::Base64Options *sipCpp = reinterpret_cast< ::QByteArray::Base64Options *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QByteArray_Base64Options));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        *sipCpp = QByteArray::Base64Options(*sipCpp ^ a0);
#line 181 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQByteArrayBase64Options.cpp"

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


extern "C" {static PyObject *slot_QByteArray_Base64Options___xor__(PyObject *,PyObject *);}
static PyObject *slot_QByteArray_Base64Options___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QByteArray::Base64Options* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QByteArray_Base64Options, &a0, &a0State, &a1))
        {
             ::QByteArray::Base64Options*sipRes;

            sipRes = new  ::QByteArray::Base64Options((*a0 ^ a1));
            sipReleaseType(a0,sipType_QByteArray_Base64Options,a0State);

            return sipConvertFromNewType(sipRes,sipType_QByteArray_Base64Options,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, xor_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QByteArray_Base64Options___ior__(PyObject *,PyObject *);}
static PyObject *slot_QByteArray_Base64Options___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QByteArray_Base64Options)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QByteArray::Base64Options *sipCpp = reinterpret_cast< ::QByteArray::Base64Options *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QByteArray_Base64Options));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        *sipCpp = QByteArray::Base64Options(*sipCpp | a0);
#line 253 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQByteArrayBase64Options.cpp"

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


extern "C" {static PyObject *slot_QByteArray_Base64Options___or__(PyObject *,PyObject *);}
static PyObject *slot_QByteArray_Base64Options___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QByteArray::Base64Options* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QByteArray_Base64Options, &a0, &a0State, &a1))
        {
             ::QByteArray::Base64Options*sipRes;

            sipRes = new  ::QByteArray::Base64Options((*a0 | a1));
            sipReleaseType(a0,sipType_QByteArray_Base64Options,a0State);

            return sipConvertFromNewType(sipRes,sipType_QByteArray_Base64Options,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, or_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QByteArray_Base64Options___iand__(PyObject *,PyObject *);}
static PyObject *slot_QByteArray_Base64Options___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QByteArray_Base64Options)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QByteArray::Base64Options *sipCpp = reinterpret_cast< ::QByteArray::Base64Options *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QByteArray_Base64Options));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QByteArray::Base64Options::operator&=(a0);

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


extern "C" {static PyObject *slot_QByteArray_Base64Options___and__(PyObject *,PyObject *);}
static PyObject *slot_QByteArray_Base64Options___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QByteArray::Base64Options* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QByteArray_Base64Options, &a0, &a0State, &a1))
        {
             ::QByteArray::Base64Options*sipRes;

            sipRes = new  ::QByteArray::Base64Options((*a0 & a1));
            sipReleaseType(a0,sipType_QByteArray_Base64Options,a0State);

            return sipConvertFromNewType(sipRes,sipType_QByteArray_Base64Options,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, and_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QByteArray_Base64Options___invert__(PyObject *);}
static PyObject *slot_QByteArray_Base64Options___invert__(PyObject *sipSelf)
{
     ::QByteArray::Base64Options *sipCpp = reinterpret_cast< ::QByteArray::Base64Options *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QByteArray_Base64Options));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::QByteArray::Base64Options*sipRes;

            sipRes = new  ::QByteArray::Base64Options(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QByteArray_Base64Options,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QByteArray_Base64Options___int__(PyObject *);}
static PyObject *slot_QByteArray_Base64Options___int__(PyObject *sipSelf)
{
     ::QByteArray::Base64Options *sipCpp = reinterpret_cast< ::QByteArray::Base64Options *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QByteArray_Base64Options));

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
extern "C" {static void release_QByteArray_Base64Options(void *, int);}
static void release_QByteArray_Base64Options(void *sipCppV, int)
{
    delete reinterpret_cast< ::QByteArray::Base64Options *>(sipCppV);
}


extern "C" {static void *array_QByteArray_Base64Options(Py_ssize_t);}
static void *array_QByteArray_Base64Options(Py_ssize_t sipNrElem)
{
    return new  ::QByteArray::Base64Options[sipNrElem];
}


extern "C" {static void assign_QByteArray_Base64Options(void *, Py_ssize_t, void *);}
static void assign_QByteArray_Base64Options(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QByteArray::Base64Options *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QByteArray::Base64Options *>(sipSrc);
}


extern "C" {static void *copy_QByteArray_Base64Options(const void *, Py_ssize_t);}
static void *copy_QByteArray_Base64Options(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QByteArray::Base64Options(reinterpret_cast<const  ::QByteArray::Base64Options *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QByteArray_Base64Options(sipSimpleWrapper *);}
static void dealloc_QByteArray_Base64Options(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QByteArray_Base64Options(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QByteArray_Base64Options(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QByteArray_Base64Options(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QByteArray::Base64Options *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QByteArray::Base64Options();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QByteArray::Base64Options(a0);

            return sipCpp;
        }
    }

    {
        const  ::QByteArray::Base64Options* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_QByteArray_Base64Options, &a0, &a0State))
        {
            sipCpp = new  ::QByteArray::Base64Options(*a0);
            sipReleaseType(const_cast< ::QByteArray::Base64Options *>(a0),sipType_QByteArray_Base64Options,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_QByteArray_Base64Options(PyObject *, void **, int *, PyObject *);}
static int convertTo_QByteArray_Base64Options(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QByteArray::Base64Options **sipCppPtr = reinterpret_cast< ::QByteArray::Base64Options **>(sipCppPtrV);

#line 121 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QByteArray::Base64Options is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QByteArray_Base64Option)) ||
            sipCanConvertToType(sipPy, sipType_QByteArray_Base64Options, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QByteArray_Base64Option)))
{
    *sipCppPtr = new QByteArray::Base64Options(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QByteArray::Base64Options *>(sipConvertToType(sipPy, sipType_QByteArray_Base64Options, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQByteArrayBase64Options.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QByteArray_Base64Options[] = {
    {(void *)slot_QByteArray_Base64Options___hash__, hash_slot},
    {(void *)slot_QByteArray_Base64Options___bool__, bool_slot},
    {(void *)slot_QByteArray_Base64Options___ne__, ne_slot},
    {(void *)slot_QByteArray_Base64Options___eq__, eq_slot},
    {(void *)slot_QByteArray_Base64Options___ixor__, ixor_slot},
    {(void *)slot_QByteArray_Base64Options___xor__, xor_slot},
    {(void *)slot_QByteArray_Base64Options___ior__, ior_slot},
    {(void *)slot_QByteArray_Base64Options___or__, or_slot},
    {(void *)slot_QByteArray_Base64Options___iand__, iand_slot},
    {(void *)slot_QByteArray_Base64Options___and__, and_slot},
    {(void *)slot_QByteArray_Base64Options___invert__, invert_slot},
    {(void *)slot_QByteArray_Base64Options___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QByteArray_Base64Options, "\1QByteArray.Base64Options()\n"
"QByteArray.Base64Options(Union[QByteArray.Base64Options, QByteArray.Base64Option])\n"
"QByteArray.Base64Options(QByteArray.Base64Options)");


static pyqt5ClassPluginDef plugin_QByteArray_Base64Options = {
    SIP_NULLPTR,
    1,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QByteArray_Base64Options = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QByteArray__Base64Options,
        SIP_NULLPTR,
        &plugin_QByteArray_Base64Options
    },
    {
        sipNameNr_Base64Options,
        {21, 255, 0},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QByteArray_Base64Options,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QByteArray_Base64Options,
    init_type_QByteArray_Base64Options,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QByteArray_Base64Options,
    assign_QByteArray_Base64Options,
    array_QByteArray_Base64Options,
    copy_QByteArray_Base64Options,
    release_QByteArray_Base64Options,
    SIP_NULLPTR,
    convertTo_QByteArray_Base64Options,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
