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

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qstyle.sip"
#include <qstyle.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleSubControls.cpp"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qstyle.sip"
#include <qstyle.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleSubControls.cpp"


extern "C" {static long slot_QStyle_SubControls___hash__(PyObject *);}
static long slot_QStyle_SubControls___hash__(PyObject *sipSelf)
{
     ::QStyle::SubControls *sipCpp = reinterpret_cast< ::QStyle::SubControls *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_SubControls));

    if (!sipCpp)
        return 0L;


    {
        {
            long sipRes = 0;

#line 116 "sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QStyle::SubControls::Int();
#line 51 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleSubControls.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QStyle_SubControls___bool__(PyObject *);}
static int slot_QStyle_SubControls___bool__(PyObject *sipSelf)
{
     ::QStyle::SubControls *sipCpp = reinterpret_cast< ::QStyle::SubControls *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_SubControls));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QStyle::SubControls::Int() != 0);
#line 76 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleSubControls.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QStyle_SubControls___ne__(PyObject *,PyObject *);}
static PyObject *slot_QStyle_SubControls___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QStyle::SubControls *sipCpp = reinterpret_cast< ::QStyle::SubControls *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_SubControls));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QStyle::SubControls* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyle_SubControls, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QStyle::SubControls::Int() != a0->operator QStyle::SubControls::Int());
#line 106 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleSubControls.cpp"
            sipReleaseType(const_cast< ::QStyle::SubControls *>(a0),sipType_QStyle_SubControls,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, ne_slot, sipType_QStyle_SubControls, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QStyle_SubControls___eq__(PyObject *,PyObject *);}
static PyObject *slot_QStyle_SubControls___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QStyle::SubControls *sipCpp = reinterpret_cast< ::QStyle::SubControls *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_SubControls));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QStyle::SubControls* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyle_SubControls, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QStyle::SubControls::Int() == a0->operator QStyle::SubControls::Int());
#line 142 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleSubControls.cpp"
            sipReleaseType(const_cast< ::QStyle::SubControls *>(a0),sipType_QStyle_SubControls,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, eq_slot, sipType_QStyle_SubControls, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QStyle_SubControls___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QStyle_SubControls___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyle_SubControls)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QStyle::SubControls *sipCpp = reinterpret_cast< ::QStyle::SubControls *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_SubControls));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QStyle::SubControls(*sipCpp ^ a0);
#line 181 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleSubControls.cpp"

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


extern "C" {static PyObject *slot_QStyle_SubControls___xor__(PyObject *,PyObject *);}
static PyObject *slot_QStyle_SubControls___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QStyle::SubControls* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyle_SubControls, &a0, &a0State, &a1))
        {
             ::QStyle::SubControls*sipRes;

            sipRes = new  ::QStyle::SubControls((*a0 ^ a1));
            sipReleaseType(a0,sipType_QStyle_SubControls,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyle_SubControls,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, xor_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QStyle_SubControls___ior__(PyObject *,PyObject *);}
static PyObject *slot_QStyle_SubControls___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyle_SubControls)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QStyle::SubControls *sipCpp = reinterpret_cast< ::QStyle::SubControls *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_SubControls));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QStyle::SubControls(*sipCpp | a0);
#line 253 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleSubControls.cpp"

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


extern "C" {static PyObject *slot_QStyle_SubControls___or__(PyObject *,PyObject *);}
static PyObject *slot_QStyle_SubControls___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QStyle::SubControls* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyle_SubControls, &a0, &a0State, &a1))
        {
             ::QStyle::SubControls*sipRes;

            sipRes = new  ::QStyle::SubControls((*a0 | a1));
            sipReleaseType(a0,sipType_QStyle_SubControls,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyle_SubControls,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, or_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QStyle_SubControls___iand__(PyObject *,PyObject *);}
static PyObject *slot_QStyle_SubControls___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyle_SubControls)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QStyle::SubControls *sipCpp = reinterpret_cast< ::QStyle::SubControls *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_SubControls));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QStyle::SubControls::operator&=(a0);

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


extern "C" {static PyObject *slot_QStyle_SubControls___and__(PyObject *,PyObject *);}
static PyObject *slot_QStyle_SubControls___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QStyle::SubControls* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyle_SubControls, &a0, &a0State, &a1))
        {
             ::QStyle::SubControls*sipRes;

            sipRes = new  ::QStyle::SubControls((*a0 & a1));
            sipReleaseType(a0,sipType_QStyle_SubControls,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyle_SubControls,SIP_NULLPTR);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, and_slot, SIP_NULLPTR, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QStyle_SubControls___invert__(PyObject *);}
static PyObject *slot_QStyle_SubControls___invert__(PyObject *sipSelf)
{
     ::QStyle::SubControls *sipCpp = reinterpret_cast< ::QStyle::SubControls *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_SubControls));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::QStyle::SubControls*sipRes;

            sipRes = new  ::QStyle::SubControls(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QStyle_SubControls,SIP_NULLPTR);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QStyle_SubControls___int__(PyObject *);}
static PyObject *slot_QStyle_SubControls___int__(PyObject *sipSelf)
{
     ::QStyle::SubControls *sipCpp = reinterpret_cast< ::QStyle::SubControls *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_SubControls));

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
extern "C" {static void release_QStyle_SubControls(void *, int);}
static void release_QStyle_SubControls(void *sipCppV, int)
{
    delete reinterpret_cast< ::QStyle::SubControls *>(sipCppV);
}


extern "C" {static void *array_QStyle_SubControls(Py_ssize_t);}
static void *array_QStyle_SubControls(Py_ssize_t sipNrElem)
{
    return new  ::QStyle::SubControls[sipNrElem];
}


extern "C" {static void assign_QStyle_SubControls(void *, Py_ssize_t, void *);}
static void assign_QStyle_SubControls(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QStyle::SubControls *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QStyle::SubControls *>(sipSrc);
}


extern "C" {static void *copy_QStyle_SubControls(const void *, Py_ssize_t);}
static void *copy_QStyle_SubControls(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QStyle::SubControls(reinterpret_cast<const  ::QStyle::SubControls *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyle_SubControls(sipSimpleWrapper *);}
static void dealloc_QStyle_SubControls(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QStyle_SubControls(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QStyle_SubControls(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyle_SubControls(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QStyle::SubControls *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QStyle::SubControls();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QStyle::SubControls(a0);

            return sipCpp;
        }
    }

    {
        const  ::QStyle::SubControls* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_QStyle_SubControls, &a0, &a0State))
        {
            sipCpp = new  ::QStyle::SubControls(*a0);
            sipReleaseType(const_cast< ::QStyle::SubControls *>(a0),sipType_QStyle_SubControls,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_QStyle_SubControls(PyObject *, void **, int *, PyObject *);}
static int convertTo_QStyle_SubControls(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QStyle::SubControls **sipCppPtr = reinterpret_cast< ::QStyle::SubControls **>(sipCppPtrV);

#line 121 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QStyle::SubControls is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QStyle_SubControl)) ||
            sipCanConvertToType(sipPy, sipType_QStyle_SubControls, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QStyle_SubControl)))
{
    *sipCppPtr = new QStyle::SubControls(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QStyle::SubControls *>(sipConvertToType(sipPy, sipType_QStyle_SubControls, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleSubControls.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QStyle_SubControls[] = {
    {(void *)slot_QStyle_SubControls___hash__, hash_slot},
    {(void *)slot_QStyle_SubControls___bool__, bool_slot},
    {(void *)slot_QStyle_SubControls___ne__, ne_slot},
    {(void *)slot_QStyle_SubControls___eq__, eq_slot},
    {(void *)slot_QStyle_SubControls___ixor__, ixor_slot},
    {(void *)slot_QStyle_SubControls___xor__, xor_slot},
    {(void *)slot_QStyle_SubControls___ior__, ior_slot},
    {(void *)slot_QStyle_SubControls___or__, or_slot},
    {(void *)slot_QStyle_SubControls___iand__, iand_slot},
    {(void *)slot_QStyle_SubControls___and__, and_slot},
    {(void *)slot_QStyle_SubControls___invert__, invert_slot},
    {(void *)slot_QStyle_SubControls___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QStyle_SubControls, "\1QStyle.SubControls()\n"
"QStyle.SubControls(Union[QStyle.SubControls, QStyle.SubControl])\n"
"QStyle.SubControls(QStyle.SubControls)");


static pyqt5ClassPluginDef plugin_QStyle_SubControls = {
    SIP_NULLPTR,
    1,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtWidgets_QStyle_SubControls = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QStyle__SubControls,
        SIP_NULLPTR,
        &plugin_QStyle_SubControls
    },
    {
        sipNameNr_SubControls,
        {287, 255, 0},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QStyle_SubControls,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QStyle_SubControls,
    init_type_QStyle_SubControls,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QStyle_SubControls,
    assign_QStyle_SubControls,
    array_QStyle_SubControls,
    copy_QStyle_SubControls,
    release_QStyle_SubControls,
    SIP_NULLPTR,
    convertTo_QStyle_SubControls,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};