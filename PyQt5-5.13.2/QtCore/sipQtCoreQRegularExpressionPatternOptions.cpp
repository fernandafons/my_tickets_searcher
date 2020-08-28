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

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQRegularExpressionPatternOptions.cpp"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQRegularExpressionPatternOptions.cpp"


extern "C" {static long slot_QRegularExpression_PatternOptions___hash__(PyObject *);}
static long slot_QRegularExpression_PatternOptions___hash__(PyObject *sipSelf)
{
     ::QRegularExpression::PatternOptions *sipCpp = reinterpret_cast< ::QRegularExpression::PatternOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegularExpression_PatternOptions));

    if (!sipCpp)
        return 0L;


    {
        {
            long sipRes = 0;

#line 116 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QRegularExpression::PatternOptions::Int();
#line 51 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQRegularExpressionPatternOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QRegularExpression_PatternOptions___bool__(PyObject *);}
static int slot_QRegularExpression_PatternOptions___bool__(PyObject *sipSelf)
{
     ::QRegularExpression::PatternOptions *sipCpp = reinterpret_cast< ::QRegularExpression::PatternOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegularExpression_PatternOptions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QRegularExpression::PatternOptions::Int() != 0);
#line 76 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQRegularExpressionPatternOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QRegularExpression_PatternOptions___ne__(PyObject *,PyObject *);}
static PyObject *slot_QRegularExpression_PatternOptions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QRegularExpression::PatternOptions *sipCpp = reinterpret_cast< ::QRegularExpression::PatternOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegularExpression_PatternOptions));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QRegularExpression::PatternOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QRegularExpression_PatternOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QRegularExpression::PatternOptions::Int() != a0->operator QRegularExpression::PatternOptions::Int());
#line 106 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQRegularExpressionPatternOptions.cpp"
            sipReleaseType(const_cast< ::QRegularExpression::PatternOptions *>(a0),sipType_QRegularExpression_PatternOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QRegularExpression_PatternOptions, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QRegularExpression_PatternOptions___eq__(PyObject *,PyObject *);}
static PyObject *slot_QRegularExpression_PatternOptions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QRegularExpression::PatternOptions *sipCpp = reinterpret_cast< ::QRegularExpression::PatternOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegularExpression_PatternOptions));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QRegularExpression::PatternOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QRegularExpression_PatternOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QRegularExpression::PatternOptions::Int() == a0->operator QRegularExpression::PatternOptions::Int());
#line 142 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQRegularExpressionPatternOptions.cpp"
            sipReleaseType(const_cast< ::QRegularExpression::PatternOptions *>(a0),sipType_QRegularExpression_PatternOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QRegularExpression_PatternOptions, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QRegularExpression_PatternOptions___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QRegularExpression_PatternOptions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QRegularExpression_PatternOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QRegularExpression::PatternOptions *sipCpp = reinterpret_cast< ::QRegularExpression::PatternOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegularExpression_PatternOptions));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        *sipCpp = QRegularExpression::PatternOptions(*sipCpp ^ a0);
#line 181 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQRegularExpressionPatternOptions.cpp"

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


extern "C" {static PyObject *slot_QRegularExpression_PatternOptions___xor__(PyObject *,PyObject *);}
static PyObject *slot_QRegularExpression_PatternOptions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QRegularExpression::PatternOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QRegularExpression_PatternOptions, &a0, &a0State, &a1))
        {
             ::QRegularExpression::PatternOptions*sipRes;

            sipRes = new  ::QRegularExpression::PatternOptions((*a0 ^ a1));
            sipReleaseType(a0,sipType_QRegularExpression_PatternOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QRegularExpression_PatternOptions,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, xor_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QRegularExpression_PatternOptions___ior__(PyObject *,PyObject *);}
static PyObject *slot_QRegularExpression_PatternOptions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QRegularExpression_PatternOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QRegularExpression::PatternOptions *sipCpp = reinterpret_cast< ::QRegularExpression::PatternOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegularExpression_PatternOptions));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
        *sipCpp = QRegularExpression::PatternOptions(*sipCpp | a0);
#line 253 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQRegularExpressionPatternOptions.cpp"

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


extern "C" {static PyObject *slot_QRegularExpression_PatternOptions___or__(PyObject *,PyObject *);}
static PyObject *slot_QRegularExpression_PatternOptions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QRegularExpression::PatternOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QRegularExpression_PatternOptions, &a0, &a0State, &a1))
        {
             ::QRegularExpression::PatternOptions*sipRes;

            sipRes = new  ::QRegularExpression::PatternOptions((*a0 | a1));
            sipReleaseType(a0,sipType_QRegularExpression_PatternOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QRegularExpression_PatternOptions,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, or_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QRegularExpression_PatternOptions___iand__(PyObject *,PyObject *);}
static PyObject *slot_QRegularExpression_PatternOptions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QRegularExpression_PatternOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QRegularExpression::PatternOptions *sipCpp = reinterpret_cast< ::QRegularExpression::PatternOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegularExpression_PatternOptions));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QRegularExpression::PatternOptions::operator&=(a0);

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


extern "C" {static PyObject *slot_QRegularExpression_PatternOptions___and__(PyObject *,PyObject *);}
static PyObject *slot_QRegularExpression_PatternOptions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QRegularExpression::PatternOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QRegularExpression_PatternOptions, &a0, &a0State, &a1))
        {
             ::QRegularExpression::PatternOptions*sipRes;

            sipRes = new  ::QRegularExpression::PatternOptions((*a0 & a1));
            sipReleaseType(a0,sipType_QRegularExpression_PatternOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QRegularExpression_PatternOptions,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, and_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QRegularExpression_PatternOptions___invert__(PyObject *);}
static PyObject *slot_QRegularExpression_PatternOptions___invert__(PyObject *sipSelf)
{
     ::QRegularExpression::PatternOptions *sipCpp = reinterpret_cast< ::QRegularExpression::PatternOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegularExpression_PatternOptions));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::QRegularExpression::PatternOptions*sipRes;

            sipRes = new  ::QRegularExpression::PatternOptions(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QRegularExpression_PatternOptions,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QRegularExpression_PatternOptions___int__(PyObject *);}
static PyObject *slot_QRegularExpression_PatternOptions___int__(PyObject *sipSelf)
{
     ::QRegularExpression::PatternOptions *sipCpp = reinterpret_cast< ::QRegularExpression::PatternOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegularExpression_PatternOptions));

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
extern "C" {static void release_QRegularExpression_PatternOptions(void *, int);}
static void release_QRegularExpression_PatternOptions(void *sipCppV, int)
{
    delete reinterpret_cast< ::QRegularExpression::PatternOptions *>(sipCppV);
}


extern "C" {static void *array_QRegularExpression_PatternOptions(Py_ssize_t);}
static void *array_QRegularExpression_PatternOptions(Py_ssize_t sipNrElem)
{
    return new  ::QRegularExpression::PatternOptions[sipNrElem];
}


extern "C" {static void assign_QRegularExpression_PatternOptions(void *, Py_ssize_t, void *);}
static void assign_QRegularExpression_PatternOptions(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QRegularExpression::PatternOptions *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QRegularExpression::PatternOptions *>(sipSrc);
}


extern "C" {static void *copy_QRegularExpression_PatternOptions(const void *, Py_ssize_t);}
static void *copy_QRegularExpression_PatternOptions(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QRegularExpression::PatternOptions(reinterpret_cast<const  ::QRegularExpression::PatternOptions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QRegularExpression_PatternOptions(sipSimpleWrapper *);}
static void dealloc_QRegularExpression_PatternOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QRegularExpression_PatternOptions(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QRegularExpression_PatternOptions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QRegularExpression_PatternOptions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QRegularExpression::PatternOptions *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QRegularExpression::PatternOptions();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QRegularExpression::PatternOptions(a0);

            return sipCpp;
        }
    }

    {
        const  ::QRegularExpression::PatternOptions* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_QRegularExpression_PatternOptions, &a0, &a0State))
        {
            sipCpp = new  ::QRegularExpression::PatternOptions(*a0);
            sipReleaseType(const_cast< ::QRegularExpression::PatternOptions *>(a0),sipType_QRegularExpression_PatternOptions,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_QRegularExpression_PatternOptions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QRegularExpression_PatternOptions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QRegularExpression::PatternOptions **sipCppPtr = reinterpret_cast< ::QRegularExpression::PatternOptions **>(sipCppPtrV);

#line 121 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QRegularExpression::PatternOptions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QRegularExpression_PatternOption)) ||
            sipCanConvertToType(sipPy, sipType_QRegularExpression_PatternOptions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QRegularExpression_PatternOption)))
{
    *sipCppPtr = new QRegularExpression::PatternOptions(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QRegularExpression::PatternOptions *>(sipConvertToType(sipPy, sipType_QRegularExpression_PatternOptions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQRegularExpressionPatternOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QRegularExpression_PatternOptions[] = {
    {(void *)slot_QRegularExpression_PatternOptions___hash__, hash_slot},
    {(void *)slot_QRegularExpression_PatternOptions___bool__, bool_slot},
    {(void *)slot_QRegularExpression_PatternOptions___ne__, ne_slot},
    {(void *)slot_QRegularExpression_PatternOptions___eq__, eq_slot},
    {(void *)slot_QRegularExpression_PatternOptions___ixor__, ixor_slot},
    {(void *)slot_QRegularExpression_PatternOptions___xor__, xor_slot},
    {(void *)slot_QRegularExpression_PatternOptions___ior__, ior_slot},
    {(void *)slot_QRegularExpression_PatternOptions___or__, or_slot},
    {(void *)slot_QRegularExpression_PatternOptions___iand__, iand_slot},
    {(void *)slot_QRegularExpression_PatternOptions___and__, and_slot},
    {(void *)slot_QRegularExpression_PatternOptions___invert__, invert_slot},
    {(void *)slot_QRegularExpression_PatternOptions___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QRegularExpression_PatternOptions, "\1QRegularExpression.PatternOptions()\n"
"QRegularExpression.PatternOptions(Union[QRegularExpression.PatternOptions, QRegularExpression.PatternOption])\n"
"QRegularExpression.PatternOptions(QRegularExpression.PatternOptions)");


static pyqt5ClassPluginDef plugin_QRegularExpression_PatternOptions = {
    SIP_NULLPTR,
    1,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QRegularExpression_PatternOptions = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QRegularExpression__PatternOptions,
        SIP_NULLPTR,
        &plugin_QRegularExpression_PatternOptions
    },
    {
        sipNameNr_PatternOptions,
        {212, 255, 0},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QRegularExpression_PatternOptions,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QRegularExpression_PatternOptions,
    init_type_QRegularExpression_PatternOptions,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QRegularExpression_PatternOptions,
    assign_QRegularExpression_PatternOptions,
    array_QRegularExpression_PatternOptions,
    copy_QRegularExpression_PatternOptions,
    release_QRegularExpression_PatternOptions,
    SIP_NULLPTR,
    convertTo_QRegularExpression_PatternOptions,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};