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

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qdatetimeedit.sip"
#include <qdatetimeedit.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQDateTimeEditSections.cpp"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qdatetimeedit.sip"
#include <qdatetimeedit.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQDateTimeEditSections.cpp"


extern "C" {static long slot_QDateTimeEdit_Sections___hash__(PyObject *);}
static long slot_QDateTimeEdit_Sections___hash__(PyObject *sipSelf)
{
     ::QDateTimeEdit::Sections *sipCpp = reinterpret_cast< ::QDateTimeEdit::Sections *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDateTimeEdit_Sections));

    if (!sipCpp)
        return 0L;


    {
        {
            long sipRes = 0;

#line 116 "sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QDateTimeEdit::Sections::Int();
#line 51 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQDateTimeEditSections.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QDateTimeEdit_Sections___bool__(PyObject *);}
static int slot_QDateTimeEdit_Sections___bool__(PyObject *sipSelf)
{
     ::QDateTimeEdit::Sections *sipCpp = reinterpret_cast< ::QDateTimeEdit::Sections *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDateTimeEdit_Sections));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QDateTimeEdit::Sections::Int() != 0);
#line 76 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQDateTimeEditSections.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QDateTimeEdit_Sections___ne__(PyObject *,PyObject *);}
static PyObject *slot_QDateTimeEdit_Sections___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QDateTimeEdit::Sections *sipCpp = reinterpret_cast< ::QDateTimeEdit::Sections *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDateTimeEdit_Sections));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDateTimeEdit::Sections* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDateTimeEdit_Sections, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QDateTimeEdit::Sections::Int() != a0->operator QDateTimeEdit::Sections::Int());
#line 106 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQDateTimeEditSections.cpp"
            sipReleaseType(const_cast< ::QDateTimeEdit::Sections *>(a0),sipType_QDateTimeEdit_Sections,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, ne_slot, sipType_QDateTimeEdit_Sections, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QDateTimeEdit_Sections___eq__(PyObject *,PyObject *);}
static PyObject *slot_QDateTimeEdit_Sections___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QDateTimeEdit::Sections *sipCpp = reinterpret_cast< ::QDateTimeEdit::Sections *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDateTimeEdit_Sections));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QDateTimeEdit::Sections* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDateTimeEdit_Sections, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QDateTimeEdit::Sections::Int() == a0->operator QDateTimeEdit::Sections::Int());
#line 142 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQDateTimeEditSections.cpp"
            sipReleaseType(const_cast< ::QDateTimeEdit::Sections *>(a0),sipType_QDateTimeEdit_Sections,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, eq_slot, sipType_QDateTimeEdit_Sections, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QDateTimeEdit_Sections___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QDateTimeEdit_Sections___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDateTimeEdit_Sections)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QDateTimeEdit::Sections *sipCpp = reinterpret_cast< ::QDateTimeEdit::Sections *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDateTimeEdit_Sections));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QDateTimeEdit::Sections(*sipCpp ^ a0);
#line 181 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQDateTimeEditSections.cpp"

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


extern "C" {static PyObject *slot_QDateTimeEdit_Sections___xor__(PyObject *,PyObject *);}
static PyObject *slot_QDateTimeEdit_Sections___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QDateTimeEdit::Sections* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDateTimeEdit_Sections, &a0, &a0State, &a1))
        {
             ::QDateTimeEdit::Sections*sipRes;

            sipRes = new  ::QDateTimeEdit::Sections((*a0 ^ a1));
            sipReleaseType(a0,sipType_QDateTimeEdit_Sections,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDateTimeEdit_Sections,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, xor_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QDateTimeEdit_Sections___ior__(PyObject *,PyObject *);}
static PyObject *slot_QDateTimeEdit_Sections___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDateTimeEdit_Sections)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QDateTimeEdit::Sections *sipCpp = reinterpret_cast< ::QDateTimeEdit::Sections *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDateTimeEdit_Sections));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QDateTimeEdit::Sections(*sipCpp | a0);
#line 253 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQDateTimeEditSections.cpp"

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


extern "C" {static PyObject *slot_QDateTimeEdit_Sections___or__(PyObject *,PyObject *);}
static PyObject *slot_QDateTimeEdit_Sections___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QDateTimeEdit::Sections* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDateTimeEdit_Sections, &a0, &a0State, &a1))
        {
             ::QDateTimeEdit::Sections*sipRes;

            sipRes = new  ::QDateTimeEdit::Sections((*a0 | a1));
            sipReleaseType(a0,sipType_QDateTimeEdit_Sections,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDateTimeEdit_Sections,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, or_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QDateTimeEdit_Sections___iand__(PyObject *,PyObject *);}
static PyObject *slot_QDateTimeEdit_Sections___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDateTimeEdit_Sections)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QDateTimeEdit::Sections *sipCpp = reinterpret_cast< ::QDateTimeEdit::Sections *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDateTimeEdit_Sections));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QDateTimeEdit::Sections::operator&=(a0);

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


extern "C" {static PyObject *slot_QDateTimeEdit_Sections___and__(PyObject *,PyObject *);}
static PyObject *slot_QDateTimeEdit_Sections___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QDateTimeEdit::Sections* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDateTimeEdit_Sections, &a0, &a0State, &a1))
        {
             ::QDateTimeEdit::Sections*sipRes;

            sipRes = new  ::QDateTimeEdit::Sections((*a0 & a1));
            sipReleaseType(a0,sipType_QDateTimeEdit_Sections,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDateTimeEdit_Sections,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, and_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QDateTimeEdit_Sections___invert__(PyObject *);}
static PyObject *slot_QDateTimeEdit_Sections___invert__(PyObject *sipSelf)
{
     ::QDateTimeEdit::Sections *sipCpp = reinterpret_cast< ::QDateTimeEdit::Sections *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDateTimeEdit_Sections));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::QDateTimeEdit::Sections*sipRes;

            sipRes = new  ::QDateTimeEdit::Sections(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QDateTimeEdit_Sections,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QDateTimeEdit_Sections___int__(PyObject *);}
static PyObject *slot_QDateTimeEdit_Sections___int__(PyObject *sipSelf)
{
     ::QDateTimeEdit::Sections *sipCpp = reinterpret_cast< ::QDateTimeEdit::Sections *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDateTimeEdit_Sections));

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
extern "C" {static void release_QDateTimeEdit_Sections(void *, int);}
static void release_QDateTimeEdit_Sections(void *sipCppV, int)
{
    delete reinterpret_cast< ::QDateTimeEdit::Sections *>(sipCppV);
}


extern "C" {static void *array_QDateTimeEdit_Sections(Py_ssize_t);}
static void *array_QDateTimeEdit_Sections(Py_ssize_t sipNrElem)
{
    return new  ::QDateTimeEdit::Sections[sipNrElem];
}


extern "C" {static void assign_QDateTimeEdit_Sections(void *, Py_ssize_t, void *);}
static void assign_QDateTimeEdit_Sections(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QDateTimeEdit::Sections *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QDateTimeEdit::Sections *>(sipSrc);
}


extern "C" {static void *copy_QDateTimeEdit_Sections(const void *, Py_ssize_t);}
static void *copy_QDateTimeEdit_Sections(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QDateTimeEdit::Sections(reinterpret_cast<const  ::QDateTimeEdit::Sections *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDateTimeEdit_Sections(sipSimpleWrapper *);}
static void dealloc_QDateTimeEdit_Sections(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QDateTimeEdit_Sections(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QDateTimeEdit_Sections(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDateTimeEdit_Sections(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QDateTimeEdit::Sections *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QDateTimeEdit::Sections();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QDateTimeEdit::Sections(a0);

            return sipCpp;
        }
    }

    {
        const  ::QDateTimeEdit::Sections* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_QDateTimeEdit_Sections, &a0, &a0State))
        {
            sipCpp = new  ::QDateTimeEdit::Sections(*a0);
            sipReleaseType(const_cast< ::QDateTimeEdit::Sections *>(a0),sipType_QDateTimeEdit_Sections,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_QDateTimeEdit_Sections(PyObject *, void **, int *, PyObject *);}
static int convertTo_QDateTimeEdit_Sections(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QDateTimeEdit::Sections **sipCppPtr = reinterpret_cast< ::QDateTimeEdit::Sections **>(sipCppPtrV);

#line 121 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QDateTimeEdit::Sections is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QDateTimeEdit_Section)) ||
            sipCanConvertToType(sipPy, sipType_QDateTimeEdit_Sections, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QDateTimeEdit_Section)))
{
    *sipCppPtr = new QDateTimeEdit::Sections(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QDateTimeEdit::Sections *>(sipConvertToType(sipPy, sipType_QDateTimeEdit_Sections, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQDateTimeEditSections.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QDateTimeEdit_Sections[] = {
    {(void *)slot_QDateTimeEdit_Sections___hash__, hash_slot},
    {(void *)slot_QDateTimeEdit_Sections___bool__, bool_slot},
    {(void *)slot_QDateTimeEdit_Sections___ne__, ne_slot},
    {(void *)slot_QDateTimeEdit_Sections___eq__, eq_slot},
    {(void *)slot_QDateTimeEdit_Sections___ixor__, ixor_slot},
    {(void *)slot_QDateTimeEdit_Sections___xor__, xor_slot},
    {(void *)slot_QDateTimeEdit_Sections___ior__, ior_slot},
    {(void *)slot_QDateTimeEdit_Sections___or__, or_slot},
    {(void *)slot_QDateTimeEdit_Sections___iand__, iand_slot},
    {(void *)slot_QDateTimeEdit_Sections___and__, and_slot},
    {(void *)slot_QDateTimeEdit_Sections___invert__, invert_slot},
    {(void *)slot_QDateTimeEdit_Sections___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QDateTimeEdit_Sections, "\1QDateTimeEdit.Sections()\n"
"QDateTimeEdit.Sections(Union[QDateTimeEdit.Sections, QDateTimeEdit.Section])\n"
"QDateTimeEdit.Sections(QDateTimeEdit.Sections)");


static pyqt5ClassPluginDef plugin_QDateTimeEdit_Sections = {
    SIP_NULLPTR,
    1,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtWidgets_QDateTimeEdit_Sections = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QDateTimeEdit__Sections,
        SIP_NULLPTR,
        &plugin_QDateTimeEdit_Sections
    },
    {
        sipNameNr_Sections,
        {56, 255, 0},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QDateTimeEdit_Sections,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QDateTimeEdit_Sections,
    init_type_QDateTimeEdit_Sections,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QDateTimeEdit_Sections,
    assign_QDateTimeEdit_Sections,
    array_QDateTimeEdit_Sections,
    copy_QDateTimeEdit_Sections,
    release_QDateTimeEdit_Sections,
    SIP_NULLPTR,
    convertTo_QDateTimeEdit_Sections,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
