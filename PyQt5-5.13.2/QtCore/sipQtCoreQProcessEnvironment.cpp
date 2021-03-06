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

#line 231 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qprocess.sip"
#include <qprocess.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQProcessEnvironment.cpp"

#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQProcessEnvironment.cpp"
#line 27 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQProcessEnvironment.cpp"


PyDoc_STRVAR(doc_QProcessEnvironment_isEmpty, "isEmpty(self) -> bool");

extern "C" {static PyObject *meth_QProcessEnvironment_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QProcessEnvironment_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QProcessEnvironment *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QProcessEnvironment, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isEmpty();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QProcessEnvironment, sipName_isEmpty, doc_QProcessEnvironment_isEmpty);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QProcessEnvironment_clear, "clear(self)");

extern "C" {static PyObject *meth_QProcessEnvironment_clear(PyObject *, PyObject *);}
static PyObject *meth_QProcessEnvironment_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QProcessEnvironment *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QProcessEnvironment, &sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QProcessEnvironment, sipName_clear, doc_QProcessEnvironment_clear);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QProcessEnvironment_contains, "contains(self, str) -> bool");

extern "C" {static PyObject *meth_QProcessEnvironment_contains(PyObject *, PyObject *);}
static PyObject *meth_QProcessEnvironment_contains(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QProcessEnvironment *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QProcessEnvironment, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->contains(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QProcessEnvironment, sipName_contains, doc_QProcessEnvironment_contains);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QProcessEnvironment_insert, "insert(self, str, str)\n"
"insert(self, QProcessEnvironment)");

extern "C" {static PyObject *meth_QProcessEnvironment_insert(PyObject *, PyObject *);}
static PyObject *meth_QProcessEnvironment_insert(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
         ::QProcessEnvironment *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QProcessEnvironment, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            sipCpp->insert(*a0,*a1);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const  ::QProcessEnvironment* a0;
         ::QProcessEnvironment *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QProcessEnvironment, &sipCpp, sipType_QProcessEnvironment, &a0))
        {
            sipCpp->insert(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QProcessEnvironment, sipName_insert, doc_QProcessEnvironment_insert);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QProcessEnvironment_remove, "remove(self, str)");

extern "C" {static PyObject *meth_QProcessEnvironment_remove(PyObject *, PyObject *);}
static PyObject *meth_QProcessEnvironment_remove(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QProcessEnvironment *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QProcessEnvironment, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->remove(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QProcessEnvironment, sipName_remove, doc_QProcessEnvironment_remove);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QProcessEnvironment_value, "value(self, str, defaultValue: str = '') -> str");

extern "C" {static PyObject *meth_QProcessEnvironment_value(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QProcessEnvironment_value(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString& a1def = QString();
        const  ::QString* a1 = &a1def;
        int a1State = 0;
        const  ::QProcessEnvironment *sipCpp;

        static const char *sipKwdList[] = {
            SIP_NULLPTR,
            sipName_defaultValue,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1|J1", &sipSelf, sipType_QProcessEnvironment, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->value(*a0,*a1));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QProcessEnvironment, sipName_value, doc_QProcessEnvironment_value);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QProcessEnvironment_toStringList, "toStringList(self) -> List[str]");

extern "C" {static PyObject *meth_QProcessEnvironment_toStringList(PyObject *, PyObject *);}
static PyObject *meth_QProcessEnvironment_toStringList(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QProcessEnvironment *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QProcessEnvironment, &sipCpp))
        {
             ::QStringList*sipRes;

            sipRes = new  ::QStringList(sipCpp->toStringList());

            return sipConvertFromNewType(sipRes,sipType_QStringList,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QProcessEnvironment, sipName_toStringList, doc_QProcessEnvironment_toStringList);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QProcessEnvironment_systemEnvironment, "systemEnvironment() -> QProcessEnvironment");

extern "C" {static PyObject *meth_QProcessEnvironment_systemEnvironment(PyObject *, PyObject *);}
static PyObject *meth_QProcessEnvironment_systemEnvironment(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QProcessEnvironment*sipRes;

            sipRes = new  ::QProcessEnvironment( ::QProcessEnvironment::systemEnvironment());

            return sipConvertFromNewType(sipRes,sipType_QProcessEnvironment,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QProcessEnvironment, sipName_systemEnvironment, doc_QProcessEnvironment_systemEnvironment);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QProcessEnvironment_keys, "keys(self) -> List[str]");

extern "C" {static PyObject *meth_QProcessEnvironment_keys(PyObject *, PyObject *);}
static PyObject *meth_QProcessEnvironment_keys(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QProcessEnvironment *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QProcessEnvironment, &sipCpp))
        {
             ::QStringList*sipRes;

            sipRes = new  ::QStringList(sipCpp->keys());

            return sipConvertFromNewType(sipRes,sipType_QStringList,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QProcessEnvironment, sipName_keys, doc_QProcessEnvironment_keys);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QProcessEnvironment_swap, "swap(self, QProcessEnvironment)");

extern "C" {static PyObject *meth_QProcessEnvironment_swap(PyObject *, PyObject *);}
static PyObject *meth_QProcessEnvironment_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QProcessEnvironment* a0;
         ::QProcessEnvironment *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QProcessEnvironment, &sipCpp, sipType_QProcessEnvironment, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QProcessEnvironment, sipName_swap, doc_QProcessEnvironment_swap);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_QProcessEnvironment___ne__(PyObject *,PyObject *);}
static PyObject *slot_QProcessEnvironment___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QProcessEnvironment *sipCpp = reinterpret_cast< ::QProcessEnvironment *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QProcessEnvironment));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QProcessEnvironment* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QProcessEnvironment, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QProcessEnvironment::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QProcessEnvironment, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QProcessEnvironment___eq__(PyObject *,PyObject *);}
static PyObject *slot_QProcessEnvironment___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QProcessEnvironment *sipCpp = reinterpret_cast< ::QProcessEnvironment *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QProcessEnvironment));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QProcessEnvironment* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QProcessEnvironment, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QProcessEnvironment::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QProcessEnvironment, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QProcessEnvironment(void *, int);}
static void release_QProcessEnvironment(void *sipCppV, int)
{
    delete reinterpret_cast< ::QProcessEnvironment *>(sipCppV);
}


extern "C" {static void *array_QProcessEnvironment(Py_ssize_t);}
static void *array_QProcessEnvironment(Py_ssize_t sipNrElem)
{
    return new  ::QProcessEnvironment[sipNrElem];
}


extern "C" {static void assign_QProcessEnvironment(void *, Py_ssize_t, void *);}
static void assign_QProcessEnvironment(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QProcessEnvironment *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QProcessEnvironment *>(sipSrc);
}


extern "C" {static void *copy_QProcessEnvironment(const void *, Py_ssize_t);}
static void *copy_QProcessEnvironment(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QProcessEnvironment(reinterpret_cast<const  ::QProcessEnvironment *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QProcessEnvironment(sipSimpleWrapper *);}
static void dealloc_QProcessEnvironment(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QProcessEnvironment(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QProcessEnvironment(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QProcessEnvironment(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QProcessEnvironment *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QProcessEnvironment();

            return sipCpp;
        }
    }

    {
        const  ::QProcessEnvironment* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QProcessEnvironment, &a0))
        {
            sipCpp = new  ::QProcessEnvironment(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QProcessEnvironment[] = {
    {(void *)slot_QProcessEnvironment___ne__, ne_slot},
    {(void *)slot_QProcessEnvironment___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QProcessEnvironment[] = {
    {sipName_clear, meth_QProcessEnvironment_clear, METH_VARARGS, doc_QProcessEnvironment_clear},
    {sipName_contains, meth_QProcessEnvironment_contains, METH_VARARGS, doc_QProcessEnvironment_contains},
    {sipName_insert, meth_QProcessEnvironment_insert, METH_VARARGS, doc_QProcessEnvironment_insert},
    {sipName_isEmpty, meth_QProcessEnvironment_isEmpty, METH_VARARGS, doc_QProcessEnvironment_isEmpty},
    {sipName_keys, meth_QProcessEnvironment_keys, METH_VARARGS, doc_QProcessEnvironment_keys},
    {sipName_remove, meth_QProcessEnvironment_remove, METH_VARARGS, doc_QProcessEnvironment_remove},
    {sipName_swap, meth_QProcessEnvironment_swap, METH_VARARGS, doc_QProcessEnvironment_swap},
    {sipName_systemEnvironment, meth_QProcessEnvironment_systemEnvironment, METH_VARARGS, doc_QProcessEnvironment_systemEnvironment},
    {sipName_toStringList, meth_QProcessEnvironment_toStringList, METH_VARARGS, doc_QProcessEnvironment_toStringList},
    {sipName_value, SIP_MLMETH_CAST(meth_QProcessEnvironment_value), METH_VARARGS|METH_KEYWORDS, doc_QProcessEnvironment_value}
};

PyDoc_STRVAR(doc_QProcessEnvironment, "\1QProcessEnvironment()\n"
"QProcessEnvironment(QProcessEnvironment)");


static pyqt5ClassPluginDef plugin_QProcessEnvironment = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QProcessEnvironment = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QProcessEnvironment,
        SIP_NULLPTR,
        &plugin_QProcessEnvironment
    },
    {
        sipNameNr_QProcessEnvironment,
        {0, 0, 1},
        10, methods_QProcessEnvironment,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QProcessEnvironment,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QProcessEnvironment,
    init_type_QProcessEnvironment,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QProcessEnvironment,
    assign_QProcessEnvironment,
    array_QProcessEnvironment,
    copy_QProcessEnvironment,
    release_QProcessEnvironment,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
