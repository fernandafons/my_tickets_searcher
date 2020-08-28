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

#include "sipAPIQtWidgets.h"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qabstractspinbox.sip"
#include <qabstractspinbox.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQAbstractSpinBoxStepEnabled.cpp"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qabstractspinbox.sip"
#include <qabstractspinbox.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQAbstractSpinBoxStepEnabled.cpp"


extern "C" {static long slot_QAbstractSpinBox_StepEnabled___hash__(PyObject *);}
static long slot_QAbstractSpinBox_StepEnabled___hash__(PyObject *sipSelf)
{
     ::QAbstractSpinBox::StepEnabled *sipCpp = reinterpret_cast< ::QAbstractSpinBox::StepEnabled *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSpinBox_StepEnabled));

    if (!sipCpp)
        return 0L;


    {
        {
            long sipRes = 0;

#line 116 "sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QAbstractSpinBox::StepEnabled::Int();
#line 51 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQAbstractSpinBoxStepEnabled.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QAbstractSpinBox_StepEnabled___bool__(PyObject *);}
static int slot_QAbstractSpinBox_StepEnabled___bool__(PyObject *sipSelf)
{
     ::QAbstractSpinBox::StepEnabled *sipCpp = reinterpret_cast< ::QAbstractSpinBox::StepEnabled *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSpinBox_StepEnabled));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QAbstractSpinBox::StepEnabled::Int() != 0);
#line 76 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQAbstractSpinBoxStepEnabled.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QAbstractSpinBox_StepEnabled___ne__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractSpinBox_StepEnabled___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QAbstractSpinBox::StepEnabled *sipCpp = reinterpret_cast< ::QAbstractSpinBox::StepEnabled *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSpinBox_StepEnabled));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QAbstractSpinBox::StepEnabled* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QAbstractSpinBox_StepEnabled, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QAbstractSpinBox::StepEnabled::Int() != a0->operator QAbstractSpinBox::StepEnabled::Int());
#line 106 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQAbstractSpinBoxStepEnabled.cpp"
            sipReleaseType(const_cast< ::QAbstractSpinBox::StepEnabled *>(a0),sipType_QAbstractSpinBox_StepEnabled,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, ne_slot, sipType_QAbstractSpinBox_StepEnabled, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QAbstractSpinBox_StepEnabled___eq__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractSpinBox_StepEnabled___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QAbstractSpinBox::StepEnabled *sipCpp = reinterpret_cast< ::QAbstractSpinBox::StepEnabled *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSpinBox_StepEnabled));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QAbstractSpinBox::StepEnabled* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QAbstractSpinBox_StepEnabled, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QAbstractSpinBox::StepEnabled::Int() == a0->operator QAbstractSpinBox::StepEnabled::Int());
#line 142 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQAbstractSpinBoxStepEnabled.cpp"
            sipReleaseType(const_cast< ::QAbstractSpinBox::StepEnabled *>(a0),sipType_QAbstractSpinBox_StepEnabled,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, eq_slot, sipType_QAbstractSpinBox_StepEnabled, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QAbstractSpinBox_StepEnabled___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractSpinBox_StepEnabled___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QAbstractSpinBox_StepEnabled)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QAbstractSpinBox::StepEnabled *sipCpp = reinterpret_cast< ::QAbstractSpinBox::StepEnabled *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSpinBox_StepEnabled));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QAbstractSpinBox::StepEnabled(*sipCpp ^ a0);
#line 181 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQAbstractSpinBoxStepEnabled.cpp"

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


extern "C" {static PyObject *slot_QAbstractSpinBox_StepEnabled___xor__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractSpinBox_StepEnabled___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QAbstractSpinBox::StepEnabled* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QAbstractSpinBox_StepEnabled, &a0, &a0State, &a1))
        {
             ::QAbstractSpinBox::StepEnabled*sipRes;

            sipRes = new  ::QAbstractSpinBox::StepEnabled((*a0 ^ a1));
            sipReleaseType(a0,sipType_QAbstractSpinBox_StepEnabled,a0State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractSpinBox_StepEnabled,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, xor_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QAbstractSpinBox_StepEnabled___ior__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractSpinBox_StepEnabled___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QAbstractSpinBox_StepEnabled)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QAbstractSpinBox::StepEnabled *sipCpp = reinterpret_cast< ::QAbstractSpinBox::StepEnabled *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSpinBox_StepEnabled));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QAbstractSpinBox::StepEnabled(*sipCpp | a0);
#line 253 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQAbstractSpinBoxStepEnabled.cpp"

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


extern "C" {static PyObject *slot_QAbstractSpinBox_StepEnabled___or__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractSpinBox_StepEnabled___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QAbstractSpinBox::StepEnabled* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QAbstractSpinBox_StepEnabled, &a0, &a0State, &a1))
        {
             ::QAbstractSpinBox::StepEnabled*sipRes;

            sipRes = new  ::QAbstractSpinBox::StepEnabled((*a0 | a1));
            sipReleaseType(a0,sipType_QAbstractSpinBox_StepEnabled,a0State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractSpinBox_StepEnabled,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, or_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QAbstractSpinBox_StepEnabled___iand__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractSpinBox_StepEnabled___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QAbstractSpinBox_StepEnabled)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QAbstractSpinBox::StepEnabled *sipCpp = reinterpret_cast< ::QAbstractSpinBox::StepEnabled *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSpinBox_StepEnabled));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QAbstractSpinBox::StepEnabled::operator&=(a0);

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


extern "C" {static PyObject *slot_QAbstractSpinBox_StepEnabled___and__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractSpinBox_StepEnabled___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QAbstractSpinBox::StepEnabled* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QAbstractSpinBox_StepEnabled, &a0, &a0State, &a1))
        {
             ::QAbstractSpinBox::StepEnabled*sipRes;

            sipRes = new  ::QAbstractSpinBox::StepEnabled((*a0 & a1));
            sipReleaseType(a0,sipType_QAbstractSpinBox_StepEnabled,a0State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractSpinBox_StepEnabled,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, and_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QAbstractSpinBox_StepEnabled___invert__(PyObject *);}
static PyObject *slot_QAbstractSpinBox_StepEnabled___invert__(PyObject *sipSelf)
{
     ::QAbstractSpinBox::StepEnabled *sipCpp = reinterpret_cast< ::QAbstractSpinBox::StepEnabled *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSpinBox_StepEnabled));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::QAbstractSpinBox::StepEnabled*sipRes;

            sipRes = new  ::QAbstractSpinBox::StepEnabled(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QAbstractSpinBox_StepEnabled,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QAbstractSpinBox_StepEnabled___int__(PyObject *);}
static PyObject *slot_QAbstractSpinBox_StepEnabled___int__(PyObject *sipSelf)
{
     ::QAbstractSpinBox::StepEnabled *sipCpp = reinterpret_cast< ::QAbstractSpinBox::StepEnabled *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSpinBox_StepEnabled));

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
extern "C" {static void release_QAbstractSpinBox_StepEnabled(void *, int);}
static void release_QAbstractSpinBox_StepEnabled(void *sipCppV, int)
{
    delete reinterpret_cast< ::QAbstractSpinBox::StepEnabled *>(sipCppV);
}


extern "C" {static void *array_QAbstractSpinBox_StepEnabled(Py_ssize_t);}
static void *array_QAbstractSpinBox_StepEnabled(Py_ssize_t sipNrElem)
{
    return new  ::QAbstractSpinBox::StepEnabled[sipNrElem];
}


extern "C" {static void assign_QAbstractSpinBox_StepEnabled(void *, Py_ssize_t, void *);}
static void assign_QAbstractSpinBox_StepEnabled(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QAbstractSpinBox::StepEnabled *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QAbstractSpinBox::StepEnabled *>(sipSrc);
}


extern "C" {static void *copy_QAbstractSpinBox_StepEnabled(const void *, Py_ssize_t);}
static void *copy_QAbstractSpinBox_StepEnabled(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QAbstractSpinBox::StepEnabled(reinterpret_cast<const  ::QAbstractSpinBox::StepEnabled *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QAbstractSpinBox_StepEnabled(sipSimpleWrapper *);}
static void dealloc_QAbstractSpinBox_StepEnabled(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QAbstractSpinBox_StepEnabled(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QAbstractSpinBox_StepEnabled(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAbstractSpinBox_StepEnabled(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QAbstractSpinBox::StepEnabled *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QAbstractSpinBox::StepEnabled();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QAbstractSpinBox::StepEnabled(a0);

            return sipCpp;
        }
    }

    {
        const  ::QAbstractSpinBox::StepEnabled* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_QAbstractSpinBox_StepEnabled, &a0, &a0State))
        {
            sipCpp = new  ::QAbstractSpinBox::StepEnabled(*a0);
            sipReleaseType(const_cast< ::QAbstractSpinBox::StepEnabled *>(a0),sipType_QAbstractSpinBox_StepEnabled,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_QAbstractSpinBox_StepEnabled(PyObject *, void **, int *, PyObject *);}
static int convertTo_QAbstractSpinBox_StepEnabled(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QAbstractSpinBox::StepEnabled **sipCppPtr = reinterpret_cast< ::QAbstractSpinBox::StepEnabled **>(sipCppPtrV);

#line 121 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QAbstractSpinBox::StepEnabled is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QAbstractSpinBox_StepEnabledFlag)) ||
            sipCanConvertToType(sipPy, sipType_QAbstractSpinBox_StepEnabled, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QAbstractSpinBox_StepEnabledFlag)))
{
    *sipCppPtr = new QAbstractSpinBox::StepEnabled(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QAbstractSpinBox::StepEnabled *>(sipConvertToType(sipPy, sipType_QAbstractSpinBox_StepEnabled, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQAbstractSpinBoxStepEnabled.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QAbstractSpinBox_StepEnabled[] = {
    {(void *)slot_QAbstractSpinBox_StepEnabled___hash__, hash_slot},
    {(void *)slot_QAbstractSpinBox_StepEnabled___bool__, bool_slot},
    {(void *)slot_QAbstractSpinBox_StepEnabled___ne__, ne_slot},
    {(void *)slot_QAbstractSpinBox_StepEnabled___eq__, eq_slot},
    {(void *)slot_QAbstractSpinBox_StepEnabled___ixor__, ixor_slot},
    {(void *)slot_QAbstractSpinBox_StepEnabled___xor__, xor_slot},
    {(void *)slot_QAbstractSpinBox_StepEnabled___ior__, ior_slot},
    {(void *)slot_QAbstractSpinBox_StepEnabled___or__, or_slot},
    {(void *)slot_QAbstractSpinBox_StepEnabled___iand__, iand_slot},
    {(void *)slot_QAbstractSpinBox_StepEnabled___and__, and_slot},
    {(void *)slot_QAbstractSpinBox_StepEnabled___invert__, invert_slot},
    {(void *)slot_QAbstractSpinBox_StepEnabled___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QAbstractSpinBox_StepEnabled, "\1QAbstractSpinBox.StepEnabled()\n"
"QAbstractSpinBox.StepEnabled(Union[QAbstractSpinBox.StepEnabled, QAbstractSpinBox.StepEnabledFlag])\n"
"QAbstractSpinBox.StepEnabled(QAbstractSpinBox.StepEnabled)");


static pyqt5ClassPluginDef plugin_QAbstractSpinBox_StepEnabled = {
    SIP_NULLPTR,
    1,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtWidgets_QAbstractSpinBox_StepEnabled = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QAbstractSpinBox__StepEnabled,
        SIP_NULLPTR,
        &plugin_QAbstractSpinBox_StepEnabled
    },
    {
        sipNameNr_StepEnabled,
        {20, 255, 0},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QAbstractSpinBox_StepEnabled,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QAbstractSpinBox_StepEnabled,
    init_type_QAbstractSpinBox_StepEnabled,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QAbstractSpinBox_StepEnabled,
    assign_QAbstractSpinBox_StepEnabled,
    array_QAbstractSpinBox_StepEnabled,
    copy_QAbstractSpinBox_StepEnabled,
    release_QAbstractSpinBox_StepEnabled,
    SIP_NULLPTR,
    convertTo_QAbstractSpinBox_StepEnabled,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
