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

#include "sipAPIQtOpenGL.h"

#line 69 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtOpenGL/qgl.sip"
#include <qgl.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtOpenGL/sipQtOpenGLQGLFormatOpenGLVersionFlags.cpp"

#line 69 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtOpenGL/qgl.sip"
#include <qgl.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtOpenGL/sipQtOpenGLQGLFormatOpenGLVersionFlags.cpp"


extern "C" {static long slot_QGLFormat_OpenGLVersionFlags___hash__(PyObject *);}
static long slot_QGLFormat_OpenGLVersionFlags___hash__(PyObject *sipSelf)
{
     ::QGLFormat::OpenGLVersionFlags *sipCpp = reinterpret_cast< ::QGLFormat::OpenGLVersionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLFormat_OpenGLVersionFlags));

    if (!sipCpp)
        return 0L;


    {
        {
            long sipRes = 0;

#line 116 "sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QGLFormat::OpenGLVersionFlags::Int();
#line 51 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtOpenGL/sipQtOpenGLQGLFormatOpenGLVersionFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QGLFormat_OpenGLVersionFlags___bool__(PyObject *);}
static int slot_QGLFormat_OpenGLVersionFlags___bool__(PyObject *sipSelf)
{
     ::QGLFormat::OpenGLVersionFlags *sipCpp = reinterpret_cast< ::QGLFormat::OpenGLVersionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLFormat_OpenGLVersionFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QGLFormat::OpenGLVersionFlags::Int() != 0);
#line 76 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtOpenGL/sipQtOpenGLQGLFormatOpenGLVersionFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGLFormat_OpenGLVersionFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGLFormat_OpenGLVersionFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QGLFormat::OpenGLVersionFlags *sipCpp = reinterpret_cast< ::QGLFormat::OpenGLVersionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLFormat_OpenGLVersionFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QGLFormat::OpenGLVersionFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGLFormat_OpenGLVersionFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QGLFormat::OpenGLVersionFlags::Int() != a0->operator QGLFormat::OpenGLVersionFlags::Int());
#line 106 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtOpenGL/sipQtOpenGLQGLFormatOpenGLVersionFlags.cpp"
            sipReleaseType(const_cast< ::QGLFormat::OpenGLVersionFlags *>(a0),sipType_QGLFormat_OpenGLVersionFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtOpenGL, ne_slot, sipType_QGLFormat_OpenGLVersionFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QGLFormat_OpenGLVersionFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGLFormat_OpenGLVersionFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QGLFormat::OpenGLVersionFlags *sipCpp = reinterpret_cast< ::QGLFormat::OpenGLVersionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLFormat_OpenGLVersionFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QGLFormat::OpenGLVersionFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGLFormat_OpenGLVersionFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QGLFormat::OpenGLVersionFlags::Int() == a0->operator QGLFormat::OpenGLVersionFlags::Int());
#line 142 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtOpenGL/sipQtOpenGLQGLFormatOpenGLVersionFlags.cpp"
            sipReleaseType(const_cast< ::QGLFormat::OpenGLVersionFlags *>(a0),sipType_QGLFormat_OpenGLVersionFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtOpenGL, eq_slot, sipType_QGLFormat_OpenGLVersionFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QGLFormat_OpenGLVersionFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QGLFormat_OpenGLVersionFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGLFormat_OpenGLVersionFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QGLFormat::OpenGLVersionFlags *sipCpp = reinterpret_cast< ::QGLFormat::OpenGLVersionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLFormat_OpenGLVersionFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QGLFormat::OpenGLVersionFlags(*sipCpp ^ a0);
#line 181 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtOpenGL/sipQtOpenGLQGLFormatOpenGLVersionFlags.cpp"

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


extern "C" {static PyObject *slot_QGLFormat_OpenGLVersionFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QGLFormat_OpenGLVersionFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QGLFormat::OpenGLVersionFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGLFormat_OpenGLVersionFlags, &a0, &a0State, &a1))
        {
             ::QGLFormat::OpenGLVersionFlags*sipRes;

            sipRes = new  ::QGLFormat::OpenGLVersionFlags((*a0 ^ a1));
            sipReleaseType(a0,sipType_QGLFormat_OpenGLVersionFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGLFormat_OpenGLVersionFlags,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtOpenGL, xor_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QGLFormat_OpenGLVersionFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QGLFormat_OpenGLVersionFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGLFormat_OpenGLVersionFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QGLFormat::OpenGLVersionFlags *sipCpp = reinterpret_cast< ::QGLFormat::OpenGLVersionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLFormat_OpenGLVersionFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QGLFormat::OpenGLVersionFlags(*sipCpp | a0);
#line 253 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtOpenGL/sipQtOpenGLQGLFormatOpenGLVersionFlags.cpp"

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


extern "C" {static PyObject *slot_QGLFormat_OpenGLVersionFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QGLFormat_OpenGLVersionFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QGLFormat::OpenGLVersionFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGLFormat_OpenGLVersionFlags, &a0, &a0State, &a1))
        {
             ::QGLFormat::OpenGLVersionFlags*sipRes;

            sipRes = new  ::QGLFormat::OpenGLVersionFlags((*a0 | a1));
            sipReleaseType(a0,sipType_QGLFormat_OpenGLVersionFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGLFormat_OpenGLVersionFlags,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtOpenGL, or_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QGLFormat_OpenGLVersionFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QGLFormat_OpenGLVersionFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGLFormat_OpenGLVersionFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QGLFormat::OpenGLVersionFlags *sipCpp = reinterpret_cast< ::QGLFormat::OpenGLVersionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLFormat_OpenGLVersionFlags));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QGLFormat::OpenGLVersionFlags::operator&=(a0);

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


extern "C" {static PyObject *slot_QGLFormat_OpenGLVersionFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QGLFormat_OpenGLVersionFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QGLFormat::OpenGLVersionFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGLFormat_OpenGLVersionFlags, &a0, &a0State, &a1))
        {
             ::QGLFormat::OpenGLVersionFlags*sipRes;

            sipRes = new  ::QGLFormat::OpenGLVersionFlags((*a0 & a1));
            sipReleaseType(a0,sipType_QGLFormat_OpenGLVersionFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGLFormat_OpenGLVersionFlags,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtOpenGL, and_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QGLFormat_OpenGLVersionFlags___invert__(PyObject *);}
static PyObject *slot_QGLFormat_OpenGLVersionFlags___invert__(PyObject *sipSelf)
{
     ::QGLFormat::OpenGLVersionFlags *sipCpp = reinterpret_cast< ::QGLFormat::OpenGLVersionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLFormat_OpenGLVersionFlags));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::QGLFormat::OpenGLVersionFlags*sipRes;

            sipRes = new  ::QGLFormat::OpenGLVersionFlags(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QGLFormat_OpenGLVersionFlags,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGLFormat_OpenGLVersionFlags___int__(PyObject *);}
static PyObject *slot_QGLFormat_OpenGLVersionFlags___int__(PyObject *sipSelf)
{
     ::QGLFormat::OpenGLVersionFlags *sipCpp = reinterpret_cast< ::QGLFormat::OpenGLVersionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLFormat_OpenGLVersionFlags));

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
extern "C" {static void release_QGLFormat_OpenGLVersionFlags(void *, int);}
static void release_QGLFormat_OpenGLVersionFlags(void *sipCppV, int)
{
    delete reinterpret_cast< ::QGLFormat::OpenGLVersionFlags *>(sipCppV);
}


extern "C" {static void *array_QGLFormat_OpenGLVersionFlags(Py_ssize_t);}
static void *array_QGLFormat_OpenGLVersionFlags(Py_ssize_t sipNrElem)
{
    return new  ::QGLFormat::OpenGLVersionFlags[sipNrElem];
}


extern "C" {static void assign_QGLFormat_OpenGLVersionFlags(void *, Py_ssize_t, void *);}
static void assign_QGLFormat_OpenGLVersionFlags(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QGLFormat::OpenGLVersionFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QGLFormat::OpenGLVersionFlags *>(sipSrc);
}


extern "C" {static void *copy_QGLFormat_OpenGLVersionFlags(const void *, Py_ssize_t);}
static void *copy_QGLFormat_OpenGLVersionFlags(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QGLFormat::OpenGLVersionFlags(reinterpret_cast<const  ::QGLFormat::OpenGLVersionFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGLFormat_OpenGLVersionFlags(sipSimpleWrapper *);}
static void dealloc_QGLFormat_OpenGLVersionFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QGLFormat_OpenGLVersionFlags(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QGLFormat_OpenGLVersionFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGLFormat_OpenGLVersionFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QGLFormat::OpenGLVersionFlags *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QGLFormat::OpenGLVersionFlags();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QGLFormat::OpenGLVersionFlags(a0);

            return sipCpp;
        }
    }

    {
        const  ::QGLFormat::OpenGLVersionFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_QGLFormat_OpenGLVersionFlags, &a0, &a0State))
        {
            sipCpp = new  ::QGLFormat::OpenGLVersionFlags(*a0);
            sipReleaseType(const_cast< ::QGLFormat::OpenGLVersionFlags *>(a0),sipType_QGLFormat_OpenGLVersionFlags,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_QGLFormat_OpenGLVersionFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QGLFormat_OpenGLVersionFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QGLFormat::OpenGLVersionFlags **sipCppPtr = reinterpret_cast< ::QGLFormat::OpenGLVersionFlags **>(sipCppPtrV);

#line 121 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QGLFormat::OpenGLVersionFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGLFormat_OpenGLVersionFlag)) ||
            sipCanConvertToType(sipPy, sipType_QGLFormat_OpenGLVersionFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGLFormat_OpenGLVersionFlag)))
{
    *sipCppPtr = new QGLFormat::OpenGLVersionFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QGLFormat::OpenGLVersionFlags *>(sipConvertToType(sipPy, sipType_QGLFormat_OpenGLVersionFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtOpenGL/sipQtOpenGLQGLFormatOpenGLVersionFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGLFormat_OpenGLVersionFlags[] = {
    {(void *)slot_QGLFormat_OpenGLVersionFlags___hash__, hash_slot},
    {(void *)slot_QGLFormat_OpenGLVersionFlags___bool__, bool_slot},
    {(void *)slot_QGLFormat_OpenGLVersionFlags___ne__, ne_slot},
    {(void *)slot_QGLFormat_OpenGLVersionFlags___eq__, eq_slot},
    {(void *)slot_QGLFormat_OpenGLVersionFlags___ixor__, ixor_slot},
    {(void *)slot_QGLFormat_OpenGLVersionFlags___xor__, xor_slot},
    {(void *)slot_QGLFormat_OpenGLVersionFlags___ior__, ior_slot},
    {(void *)slot_QGLFormat_OpenGLVersionFlags___or__, or_slot},
    {(void *)slot_QGLFormat_OpenGLVersionFlags___iand__, iand_slot},
    {(void *)slot_QGLFormat_OpenGLVersionFlags___and__, and_slot},
    {(void *)slot_QGLFormat_OpenGLVersionFlags___invert__, invert_slot},
    {(void *)slot_QGLFormat_OpenGLVersionFlags___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QGLFormat_OpenGLVersionFlags, "\1QGLFormat.OpenGLVersionFlags()\n"
"QGLFormat.OpenGLVersionFlags(Union[QGLFormat.OpenGLVersionFlags, QGLFormat.OpenGLVersionFlag])\n"
"QGLFormat.OpenGLVersionFlags(QGLFormat.OpenGLVersionFlags)");


static pyqt5ClassPluginDef plugin_QGLFormat_OpenGLVersionFlags = {
    SIP_NULLPTR,
    1,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtOpenGL_QGLFormat_OpenGLVersionFlags = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QGLFormat__OpenGLVersionFlags,
        SIP_NULLPTR,
        &plugin_QGLFormat_OpenGLVersionFlags
    },
    {
        sipNameNr_OpenGLVersionFlags,
        {6, 255, 0},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QGLFormat_OpenGLVersionFlags,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QGLFormat_OpenGLVersionFlags,
    init_type_QGLFormat_OpenGLVersionFlags,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QGLFormat_OpenGLVersionFlags,
    assign_QGLFormat_OpenGLVersionFlags,
    array_QGLFormat_OpenGLVersionFlags,
    copy_QGLFormat_OpenGLVersionFlags,
    release_QGLFormat_OpenGLVersionFlags,
    SIP_NULLPTR,
    convertTo_QGLFormat_OpenGLVersionFlags,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
