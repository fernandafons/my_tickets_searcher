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

#include "sipAPIQtGui.h"

#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qopengldebug.sip"
#include <qopengldebug.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQOpenGLDebugMessageTypes.cpp"

#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qopengldebug.sip"
#include <qopengldebug.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQOpenGLDebugMessageTypes.cpp"


extern "C" {static long slot_QOpenGLDebugMessage_Types___hash__(PyObject *);}
static long slot_QOpenGLDebugMessage_Types___hash__(PyObject *sipSelf)
{
     ::QOpenGLDebugMessage::Types *sipCpp = reinterpret_cast< ::QOpenGLDebugMessage::Types *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Types));

    if (!sipCpp)
        return 0L;


    {
        {
            long sipRes = 0;

#line 116 "sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QOpenGLDebugMessage::Types::Int();
#line 51 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQOpenGLDebugMessageTypes.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QOpenGLDebugMessage_Types___bool__(PyObject *);}
static int slot_QOpenGLDebugMessage_Types___bool__(PyObject *sipSelf)
{
     ::QOpenGLDebugMessage::Types *sipCpp = reinterpret_cast< ::QOpenGLDebugMessage::Types *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Types));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QOpenGLDebugMessage::Types::Int() != 0);
#line 76 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQOpenGLDebugMessageTypes.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Types___ne__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Types___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QOpenGLDebugMessage::Types *sipCpp = reinterpret_cast< ::QOpenGLDebugMessage::Types *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Types));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QOpenGLDebugMessage::Types* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QOpenGLDebugMessage_Types, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QOpenGLDebugMessage::Types::Int() != a0->operator QOpenGLDebugMessage::Types::Int());
#line 106 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQOpenGLDebugMessageTypes.cpp"
            sipReleaseType(const_cast< ::QOpenGLDebugMessage::Types *>(a0),sipType_QOpenGLDebugMessage_Types,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtGui, ne_slot, sipType_QOpenGLDebugMessage_Types, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Types___eq__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Types___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QOpenGLDebugMessage::Types *sipCpp = reinterpret_cast< ::QOpenGLDebugMessage::Types *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Types));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QOpenGLDebugMessage::Types* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QOpenGLDebugMessage_Types, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QOpenGLDebugMessage::Types::Int() == a0->operator QOpenGLDebugMessage::Types::Int());
#line 142 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQOpenGLDebugMessageTypes.cpp"
            sipReleaseType(const_cast< ::QOpenGLDebugMessage::Types *>(a0),sipType_QOpenGLDebugMessage_Types,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtGui, eq_slot, sipType_QOpenGLDebugMessage_Types, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Types___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Types___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QOpenGLDebugMessage_Types)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QOpenGLDebugMessage::Types *sipCpp = reinterpret_cast< ::QOpenGLDebugMessage::Types *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Types));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QOpenGLDebugMessage::Types(*sipCpp ^ a0);
#line 181 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQOpenGLDebugMessageTypes.cpp"

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


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Types___xor__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Types___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QOpenGLDebugMessage::Types* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QOpenGLDebugMessage_Types, &a0, &a0State, &a1))
        {
             ::QOpenGLDebugMessage::Types*sipRes;

            sipRes = new  ::QOpenGLDebugMessage::Types((*a0 ^ a1));
            sipReleaseType(a0,sipType_QOpenGLDebugMessage_Types,a0State);

            return sipConvertFromNewType(sipRes,sipType_QOpenGLDebugMessage_Types,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtGui, xor_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Types___ior__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Types___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QOpenGLDebugMessage_Types)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QOpenGLDebugMessage::Types *sipCpp = reinterpret_cast< ::QOpenGLDebugMessage::Types *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Types));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QOpenGLDebugMessage::Types(*sipCpp | a0);
#line 253 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQOpenGLDebugMessageTypes.cpp"

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


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Types___or__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Types___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QOpenGLDebugMessage::Types* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QOpenGLDebugMessage_Types, &a0, &a0State, &a1))
        {
             ::QOpenGLDebugMessage::Types*sipRes;

            sipRes = new  ::QOpenGLDebugMessage::Types((*a0 | a1));
            sipReleaseType(a0,sipType_QOpenGLDebugMessage_Types,a0State);

            return sipConvertFromNewType(sipRes,sipType_QOpenGLDebugMessage_Types,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtGui, or_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Types___iand__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Types___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QOpenGLDebugMessage_Types)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QOpenGLDebugMessage::Types *sipCpp = reinterpret_cast< ::QOpenGLDebugMessage::Types *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Types));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QOpenGLDebugMessage::Types::operator&=(a0);

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


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Types___and__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Types___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QOpenGLDebugMessage::Types* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QOpenGLDebugMessage_Types, &a0, &a0State, &a1))
        {
             ::QOpenGLDebugMessage::Types*sipRes;

            sipRes = new  ::QOpenGLDebugMessage::Types((*a0 & a1));
            sipReleaseType(a0,sipType_QOpenGLDebugMessage_Types,a0State);

            return sipConvertFromNewType(sipRes,sipType_QOpenGLDebugMessage_Types,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtGui, and_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Types___invert__(PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Types___invert__(PyObject *sipSelf)
{
     ::QOpenGLDebugMessage::Types *sipCpp = reinterpret_cast< ::QOpenGLDebugMessage::Types *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Types));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::QOpenGLDebugMessage::Types*sipRes;

            sipRes = new  ::QOpenGLDebugMessage::Types(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QOpenGLDebugMessage_Types,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Types___int__(PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Types___int__(PyObject *sipSelf)
{
     ::QOpenGLDebugMessage::Types *sipCpp = reinterpret_cast< ::QOpenGLDebugMessage::Types *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Types));

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
extern "C" {static void release_QOpenGLDebugMessage_Types(void *, int);}
static void release_QOpenGLDebugMessage_Types(void *sipCppV, int)
{
    delete reinterpret_cast< ::QOpenGLDebugMessage::Types *>(sipCppV);
}


extern "C" {static void *array_QOpenGLDebugMessage_Types(Py_ssize_t);}
static void *array_QOpenGLDebugMessage_Types(Py_ssize_t sipNrElem)
{
    return new  ::QOpenGLDebugMessage::Types[sipNrElem];
}


extern "C" {static void assign_QOpenGLDebugMessage_Types(void *, Py_ssize_t, void *);}
static void assign_QOpenGLDebugMessage_Types(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QOpenGLDebugMessage::Types *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QOpenGLDebugMessage::Types *>(sipSrc);
}


extern "C" {static void *copy_QOpenGLDebugMessage_Types(const void *, Py_ssize_t);}
static void *copy_QOpenGLDebugMessage_Types(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QOpenGLDebugMessage::Types(reinterpret_cast<const  ::QOpenGLDebugMessage::Types *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QOpenGLDebugMessage_Types(sipSimpleWrapper *);}
static void dealloc_QOpenGLDebugMessage_Types(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QOpenGLDebugMessage_Types(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QOpenGLDebugMessage_Types(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QOpenGLDebugMessage_Types(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QOpenGLDebugMessage::Types *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QOpenGLDebugMessage::Types();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QOpenGLDebugMessage::Types(a0);

            return sipCpp;
        }
    }

    {
        const  ::QOpenGLDebugMessage::Types* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_QOpenGLDebugMessage_Types, &a0, &a0State))
        {
            sipCpp = new  ::QOpenGLDebugMessage::Types(*a0);
            sipReleaseType(const_cast< ::QOpenGLDebugMessage::Types *>(a0),sipType_QOpenGLDebugMessage_Types,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_QOpenGLDebugMessage_Types(PyObject *, void **, int *, PyObject *);}
static int convertTo_QOpenGLDebugMessage_Types(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QOpenGLDebugMessage::Types **sipCppPtr = reinterpret_cast< ::QOpenGLDebugMessage::Types **>(sipCppPtrV);

#line 121 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QOpenGLDebugMessage::Types is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QOpenGLDebugMessage_Type)) ||
            sipCanConvertToType(sipPy, sipType_QOpenGLDebugMessage_Types, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QOpenGLDebugMessage_Type)))
{
    *sipCppPtr = new QOpenGLDebugMessage::Types(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QOpenGLDebugMessage::Types *>(sipConvertToType(sipPy, sipType_QOpenGLDebugMessage_Types, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQOpenGLDebugMessageTypes.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QOpenGLDebugMessage_Types[] = {
    {(void *)slot_QOpenGLDebugMessage_Types___hash__, hash_slot},
    {(void *)slot_QOpenGLDebugMessage_Types___bool__, bool_slot},
    {(void *)slot_QOpenGLDebugMessage_Types___ne__, ne_slot},
    {(void *)slot_QOpenGLDebugMessage_Types___eq__, eq_slot},
    {(void *)slot_QOpenGLDebugMessage_Types___ixor__, ixor_slot},
    {(void *)slot_QOpenGLDebugMessage_Types___xor__, xor_slot},
    {(void *)slot_QOpenGLDebugMessage_Types___ior__, ior_slot},
    {(void *)slot_QOpenGLDebugMessage_Types___or__, or_slot},
    {(void *)slot_QOpenGLDebugMessage_Types___iand__, iand_slot},
    {(void *)slot_QOpenGLDebugMessage_Types___and__, and_slot},
    {(void *)slot_QOpenGLDebugMessage_Types___invert__, invert_slot},
    {(void *)slot_QOpenGLDebugMessage_Types___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QOpenGLDebugMessage_Types, "\1QOpenGLDebugMessage.Types()\n"
"QOpenGLDebugMessage.Types(Union[QOpenGLDebugMessage.Types, QOpenGLDebugMessage.Type])\n"
"QOpenGLDebugMessage.Types(QOpenGLDebugMessage.Types)");


static pyqt5ClassPluginDef plugin_QOpenGLDebugMessage_Types = {
    SIP_NULLPTR,
    1,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtGui_QOpenGLDebugMessage_Types = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QOpenGLDebugMessage__Types,
        SIP_NULLPTR,
        &plugin_QOpenGLDebugMessage_Types
    },
    {
        sipNameNr_Types,
        {136, 255, 0},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QOpenGLDebugMessage_Types,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QOpenGLDebugMessage_Types,
    init_type_QOpenGLDebugMessage_Types,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QOpenGLDebugMessage_Types,
    assign_QOpenGLDebugMessage_Types,
    array_QOpenGLDebugMessage_Types,
    copy_QOpenGLDebugMessage_Types,
    release_QOpenGLDebugMessage_Types,
    SIP_NULLPTR,
    convertTo_QOpenGLDebugMessage_Types,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
