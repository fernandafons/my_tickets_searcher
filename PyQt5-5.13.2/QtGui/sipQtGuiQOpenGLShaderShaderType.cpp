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

#line 28 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qopenglshaderprogram.sip"
#include <qopenglshaderprogram.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQOpenGLShaderShaderType.cpp"

#line 28 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qopenglshaderprogram.sip"
#include <qopenglshaderprogram.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQOpenGLShaderShaderType.cpp"


extern "C" {static long slot_QOpenGLShader_ShaderType___hash__(PyObject *);}
static long slot_QOpenGLShader_ShaderType___hash__(PyObject *sipSelf)
{
     ::QOpenGLShader::ShaderType *sipCpp = reinterpret_cast< ::QOpenGLShader::ShaderType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLShader_ShaderType));

    if (!sipCpp)
        return 0L;


    {
        {
            long sipRes = 0;

#line 116 "sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QOpenGLShader::ShaderType::Int();
#line 51 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQOpenGLShaderShaderType.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QOpenGLShader_ShaderType___bool__(PyObject *);}
static int slot_QOpenGLShader_ShaderType___bool__(PyObject *sipSelf)
{
     ::QOpenGLShader::ShaderType *sipCpp = reinterpret_cast< ::QOpenGLShader::ShaderType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLShader_ShaderType));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QOpenGLShader::ShaderType::Int() != 0);
#line 76 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQOpenGLShaderShaderType.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QOpenGLShader_ShaderType___ne__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLShader_ShaderType___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QOpenGLShader::ShaderType *sipCpp = reinterpret_cast< ::QOpenGLShader::ShaderType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLShader_ShaderType));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QOpenGLShader::ShaderType* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QOpenGLShader_ShaderType, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QOpenGLShader::ShaderType::Int() != a0->operator QOpenGLShader::ShaderType::Int());
#line 106 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQOpenGLShaderShaderType.cpp"
            sipReleaseType(const_cast< ::QOpenGLShader::ShaderType *>(a0),sipType_QOpenGLShader_ShaderType,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtGui, ne_slot, sipType_QOpenGLShader_ShaderType, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QOpenGLShader_ShaderType___eq__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLShader_ShaderType___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QOpenGLShader::ShaderType *sipCpp = reinterpret_cast< ::QOpenGLShader::ShaderType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLShader_ShaderType));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QOpenGLShader::ShaderType* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QOpenGLShader_ShaderType, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QOpenGLShader::ShaderType::Int() == a0->operator QOpenGLShader::ShaderType::Int());
#line 142 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQOpenGLShaderShaderType.cpp"
            sipReleaseType(const_cast< ::QOpenGLShader::ShaderType *>(a0),sipType_QOpenGLShader_ShaderType,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtGui, eq_slot, sipType_QOpenGLShader_ShaderType, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QOpenGLShader_ShaderType___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLShader_ShaderType___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QOpenGLShader_ShaderType)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QOpenGLShader::ShaderType *sipCpp = reinterpret_cast< ::QOpenGLShader::ShaderType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLShader_ShaderType));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QOpenGLShader::ShaderType(*sipCpp ^ a0);
#line 181 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQOpenGLShaderShaderType.cpp"

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


extern "C" {static PyObject *slot_QOpenGLShader_ShaderType___xor__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLShader_ShaderType___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QOpenGLShader::ShaderType* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QOpenGLShader_ShaderType, &a0, &a0State, &a1))
        {
             ::QOpenGLShader::ShaderType*sipRes;

            sipRes = new  ::QOpenGLShader::ShaderType((*a0 ^ a1));
            sipReleaseType(a0,sipType_QOpenGLShader_ShaderType,a0State);

            return sipConvertFromNewType(sipRes,sipType_QOpenGLShader_ShaderType,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtGui, xor_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QOpenGLShader_ShaderType___ior__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLShader_ShaderType___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QOpenGLShader_ShaderType)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QOpenGLShader::ShaderType *sipCpp = reinterpret_cast< ::QOpenGLShader::ShaderType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLShader_ShaderType));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QOpenGLShader::ShaderType(*sipCpp | a0);
#line 253 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQOpenGLShaderShaderType.cpp"

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


extern "C" {static PyObject *slot_QOpenGLShader_ShaderType___or__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLShader_ShaderType___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QOpenGLShader::ShaderType* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QOpenGLShader_ShaderType, &a0, &a0State, &a1))
        {
             ::QOpenGLShader::ShaderType*sipRes;

            sipRes = new  ::QOpenGLShader::ShaderType((*a0 | a1));
            sipReleaseType(a0,sipType_QOpenGLShader_ShaderType,a0State);

            return sipConvertFromNewType(sipRes,sipType_QOpenGLShader_ShaderType,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtGui, or_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QOpenGLShader_ShaderType___iand__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLShader_ShaderType___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QOpenGLShader_ShaderType)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QOpenGLShader::ShaderType *sipCpp = reinterpret_cast< ::QOpenGLShader::ShaderType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLShader_ShaderType));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QOpenGLShader::ShaderType::operator&=(a0);

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


extern "C" {static PyObject *slot_QOpenGLShader_ShaderType___and__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLShader_ShaderType___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QOpenGLShader::ShaderType* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QOpenGLShader_ShaderType, &a0, &a0State, &a1))
        {
             ::QOpenGLShader::ShaderType*sipRes;

            sipRes = new  ::QOpenGLShader::ShaderType((*a0 & a1));
            sipReleaseType(a0,sipType_QOpenGLShader_ShaderType,a0State);

            return sipConvertFromNewType(sipRes,sipType_QOpenGLShader_ShaderType,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtGui, and_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QOpenGLShader_ShaderType___invert__(PyObject *);}
static PyObject *slot_QOpenGLShader_ShaderType___invert__(PyObject *sipSelf)
{
     ::QOpenGLShader::ShaderType *sipCpp = reinterpret_cast< ::QOpenGLShader::ShaderType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLShader_ShaderType));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::QOpenGLShader::ShaderType*sipRes;

            sipRes = new  ::QOpenGLShader::ShaderType(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QOpenGLShader_ShaderType,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QOpenGLShader_ShaderType___int__(PyObject *);}
static PyObject *slot_QOpenGLShader_ShaderType___int__(PyObject *sipSelf)
{
     ::QOpenGLShader::ShaderType *sipCpp = reinterpret_cast< ::QOpenGLShader::ShaderType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLShader_ShaderType));

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
extern "C" {static void release_QOpenGLShader_ShaderType(void *, int);}
static void release_QOpenGLShader_ShaderType(void *sipCppV, int)
{
    delete reinterpret_cast< ::QOpenGLShader::ShaderType *>(sipCppV);
}


extern "C" {static void *array_QOpenGLShader_ShaderType(Py_ssize_t);}
static void *array_QOpenGLShader_ShaderType(Py_ssize_t sipNrElem)
{
    return new  ::QOpenGLShader::ShaderType[sipNrElem];
}


extern "C" {static void assign_QOpenGLShader_ShaderType(void *, Py_ssize_t, void *);}
static void assign_QOpenGLShader_ShaderType(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QOpenGLShader::ShaderType *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QOpenGLShader::ShaderType *>(sipSrc);
}


extern "C" {static void *copy_QOpenGLShader_ShaderType(const void *, Py_ssize_t);}
static void *copy_QOpenGLShader_ShaderType(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QOpenGLShader::ShaderType(reinterpret_cast<const  ::QOpenGLShader::ShaderType *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QOpenGLShader_ShaderType(sipSimpleWrapper *);}
static void dealloc_QOpenGLShader_ShaderType(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QOpenGLShader_ShaderType(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QOpenGLShader_ShaderType(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QOpenGLShader_ShaderType(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QOpenGLShader::ShaderType *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QOpenGLShader::ShaderType();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QOpenGLShader::ShaderType(a0);

            return sipCpp;
        }
    }

    {
        const  ::QOpenGLShader::ShaderType* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_QOpenGLShader_ShaderType, &a0, &a0State))
        {
            sipCpp = new  ::QOpenGLShader::ShaderType(*a0);
            sipReleaseType(const_cast< ::QOpenGLShader::ShaderType *>(a0),sipType_QOpenGLShader_ShaderType,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_QOpenGLShader_ShaderType(PyObject *, void **, int *, PyObject *);}
static int convertTo_QOpenGLShader_ShaderType(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QOpenGLShader::ShaderType **sipCppPtr = reinterpret_cast< ::QOpenGLShader::ShaderType **>(sipCppPtrV);

#line 121 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QOpenGLShader::ShaderType is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QOpenGLShader_ShaderTypeBit)) ||
            sipCanConvertToType(sipPy, sipType_QOpenGLShader_ShaderType, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QOpenGLShader_ShaderTypeBit)))
{
    *sipCppPtr = new QOpenGLShader::ShaderType(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QOpenGLShader::ShaderType *>(sipConvertToType(sipPy, sipType_QOpenGLShader_ShaderType, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQOpenGLShaderShaderType.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QOpenGLShader_ShaderType[] = {
    {(void *)slot_QOpenGLShader_ShaderType___hash__, hash_slot},
    {(void *)slot_QOpenGLShader_ShaderType___bool__, bool_slot},
    {(void *)slot_QOpenGLShader_ShaderType___ne__, ne_slot},
    {(void *)slot_QOpenGLShader_ShaderType___eq__, eq_slot},
    {(void *)slot_QOpenGLShader_ShaderType___ixor__, ixor_slot},
    {(void *)slot_QOpenGLShader_ShaderType___xor__, xor_slot},
    {(void *)slot_QOpenGLShader_ShaderType___ior__, ior_slot},
    {(void *)slot_QOpenGLShader_ShaderType___or__, or_slot},
    {(void *)slot_QOpenGLShader_ShaderType___iand__, iand_slot},
    {(void *)slot_QOpenGLShader_ShaderType___and__, and_slot},
    {(void *)slot_QOpenGLShader_ShaderType___invert__, invert_slot},
    {(void *)slot_QOpenGLShader_ShaderType___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QOpenGLShader_ShaderType, "\1QOpenGLShader.ShaderType()\n"
"QOpenGLShader.ShaderType(Union[QOpenGLShader.ShaderType, QOpenGLShader.ShaderTypeBit])\n"
"QOpenGLShader.ShaderType(QOpenGLShader.ShaderType)");


static pyqt5ClassPluginDef plugin_QOpenGLShader_ShaderType = {
    SIP_NULLPTR,
    1,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtGui_QOpenGLShader_ShaderType = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QOpenGLShader__ShaderType,
        SIP_NULLPTR,
        &plugin_QOpenGLShader_ShaderType
    },
    {
        sipNameNr_ShaderType,
        {149, 255, 0},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QOpenGLShader_ShaderType,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QOpenGLShader_ShaderType,
    init_type_QOpenGLShader_ShaderType,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QOpenGLShader_ShaderType,
    assign_QOpenGLShader_ShaderType,
    array_QOpenGLShader_ShaderType,
    copy_QOpenGLShader_ShaderType,
    release_QOpenGLShader_ShaderType,
    SIP_NULLPTR,
    convertTo_QOpenGLShader_ShaderType,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};