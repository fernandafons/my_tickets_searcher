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

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qjsonvalue.sip"
#include <qjsonvalue.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQJsonValue.cpp"

#line 27 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQJsonValue.cpp"
#line 25 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qjsonobject.sip"
#include <qjsonobject.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQJsonValue.cpp"
#line 31 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qjsonarray.sip"
#include <qjsonarray.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQJsonValue.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 42 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQJsonValue.cpp"


PyDoc_STRVAR(doc_QJsonValue_fromVariant, "fromVariant(Any) -> QJsonValue");

extern "C" {static PyObject *meth_QJsonValue_fromVariant(PyObject *, PyObject *);}
static PyObject *meth_QJsonValue_fromVariant(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QVariant* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QVariant, &a0, &a0State))
        {
             ::QJsonValue*sipRes;

            sipRes = new  ::QJsonValue( ::QJsonValue::fromVariant(*a0));
            sipReleaseType(const_cast< ::QVariant *>(a0),sipType_QVariant,a0State);

            return sipConvertFromNewType(sipRes,sipType_QJsonValue,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QJsonValue, sipName_fromVariant, doc_QJsonValue_fromVariant);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QJsonValue_toVariant, "toVariant(self) -> Any");

extern "C" {static PyObject *meth_QJsonValue_toVariant(PyObject *, PyObject *);}
static PyObject *meth_QJsonValue_toVariant(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QJsonValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJsonValue, &sipCpp))
        {
             ::QVariant*sipRes;

            sipRes = new  ::QVariant(sipCpp->toVariant());

            return sipConvertFromNewType(sipRes,sipType_QVariant,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QJsonValue, sipName_toVariant, doc_QJsonValue_toVariant);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QJsonValue_type, "type(self) -> QJsonValue.Type");

extern "C" {static PyObject *meth_QJsonValue_type(PyObject *, PyObject *);}
static PyObject *meth_QJsonValue_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QJsonValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJsonValue, &sipCpp))
        {
             ::QJsonValue::Type sipRes;

            sipRes = sipCpp->type();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QJsonValue_Type);
        }
    }

    sipNoMethod(sipParseErr, sipName_QJsonValue, sipName_type, doc_QJsonValue_type);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QJsonValue_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QJsonValue_isNull(PyObject *, PyObject *);}
static PyObject *meth_QJsonValue_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QJsonValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJsonValue, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QJsonValue, sipName_isNull, doc_QJsonValue_isNull);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QJsonValue_isBool, "isBool(self) -> bool");

extern "C" {static PyObject *meth_QJsonValue_isBool(PyObject *, PyObject *);}
static PyObject *meth_QJsonValue_isBool(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QJsonValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJsonValue, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isBool();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QJsonValue, sipName_isBool, doc_QJsonValue_isBool);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QJsonValue_isDouble, "isDouble(self) -> bool");

extern "C" {static PyObject *meth_QJsonValue_isDouble(PyObject *, PyObject *);}
static PyObject *meth_QJsonValue_isDouble(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QJsonValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJsonValue, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isDouble();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QJsonValue, sipName_isDouble, doc_QJsonValue_isDouble);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QJsonValue_isString, "isString(self) -> bool");

extern "C" {static PyObject *meth_QJsonValue_isString(PyObject *, PyObject *);}
static PyObject *meth_QJsonValue_isString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QJsonValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJsonValue, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isString();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QJsonValue, sipName_isString, doc_QJsonValue_isString);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QJsonValue_isArray, "isArray(self) -> bool");

extern "C" {static PyObject *meth_QJsonValue_isArray(PyObject *, PyObject *);}
static PyObject *meth_QJsonValue_isArray(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QJsonValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJsonValue, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isArray();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QJsonValue, sipName_isArray, doc_QJsonValue_isArray);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QJsonValue_isObject, "isObject(self) -> bool");

extern "C" {static PyObject *meth_QJsonValue_isObject(PyObject *, PyObject *);}
static PyObject *meth_QJsonValue_isObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QJsonValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJsonValue, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isObject();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QJsonValue, sipName_isObject, doc_QJsonValue_isObject);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QJsonValue_isUndefined, "isUndefined(self) -> bool");

extern "C" {static PyObject *meth_QJsonValue_isUndefined(PyObject *, PyObject *);}
static PyObject *meth_QJsonValue_isUndefined(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QJsonValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJsonValue, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isUndefined();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QJsonValue, sipName_isUndefined, doc_QJsonValue_isUndefined);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QJsonValue_toBool, "toBool(self, defaultValue: bool = False) -> bool");

extern "C" {static PyObject *meth_QJsonValue_toBool(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QJsonValue_toBool(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool a0 = 0;
        const  ::QJsonValue *sipCpp;

        static const char *sipKwdList[] = {
            sipName_defaultValue,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|b", &sipSelf, sipType_QJsonValue, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->toBool(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QJsonValue, sipName_toBool, doc_QJsonValue_toBool);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QJsonValue_toInt, "toInt(self, defaultValue: int = 0) -> int");

extern "C" {static PyObject *meth_QJsonValue_toInt(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QJsonValue_toInt(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0 = 0;
        const  ::QJsonValue *sipCpp;

        static const char *sipKwdList[] = {
            sipName_defaultValue,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|i", &sipSelf, sipType_QJsonValue, &sipCpp, &a0))
        {
            int sipRes;

            sipRes = sipCpp->toInt(a0);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QJsonValue, sipName_toInt, doc_QJsonValue_toInt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QJsonValue_toDouble, "toDouble(self, defaultValue: float = 0) -> float");

extern "C" {static PyObject *meth_QJsonValue_toDouble(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QJsonValue_toDouble(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        double a0 = 0;
        const  ::QJsonValue *sipCpp;

        static const char *sipKwdList[] = {
            sipName_defaultValue,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|d", &sipSelf, sipType_QJsonValue, &sipCpp, &a0))
        {
            double sipRes;

            sipRes = sipCpp->toDouble(a0);

            return PyFloat_FromDouble(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QJsonValue, sipName_toDouble, doc_QJsonValue_toDouble);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QJsonValue_toArray, "toArray(self) -> List[QJsonValue]\n"
"toArray(self, Iterable[Union[QJsonValue, QJsonValue.Type, Dict[str, QJsonValue], bool, int, float, str]]) -> List[QJsonValue]");

extern "C" {static PyObject *meth_QJsonValue_toArray(PyObject *, PyObject *);}
static PyObject *meth_QJsonValue_toArray(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QJsonValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJsonValue, &sipCpp))
        {
             ::QJsonArray*sipRes;

            sipRes = new  ::QJsonArray(sipCpp->toArray());

            return sipConvertFromNewType(sipRes,sipType_QJsonArray,SIP_NULLPTR);
        }
    }

    {
        const  ::QJsonArray* a0;
        int a0State = 0;
        const  ::QJsonValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QJsonValue, &sipCpp, sipType_QJsonArray,&a0, &a0State))
        {
             ::QJsonArray*sipRes;

            sipRes = new  ::QJsonArray(sipCpp->toArray(*a0));
            sipReleaseType(const_cast< ::QJsonArray *>(a0),sipType_QJsonArray,a0State);

            return sipConvertFromNewType(sipRes,sipType_QJsonArray,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QJsonValue, sipName_toArray, doc_QJsonValue_toArray);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QJsonValue_toObject, "toObject(self) -> Dict[str, QJsonValue]\n"
"toObject(self, Dict[str, QJsonValue]) -> Dict[str, QJsonValue]");

extern "C" {static PyObject *meth_QJsonValue_toObject(PyObject *, PyObject *);}
static PyObject *meth_QJsonValue_toObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QJsonValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJsonValue, &sipCpp))
        {
             ::QJsonObject*sipRes;

            sipRes = new  ::QJsonObject(sipCpp->toObject());

            return sipConvertFromNewType(sipRes,sipType_QJsonObject,SIP_NULLPTR);
        }
    }

    {
        const  ::QJsonObject* a0;
        int a0State = 0;
        const  ::QJsonValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QJsonValue, &sipCpp, sipType_QJsonObject,&a0, &a0State))
        {
             ::QJsonObject*sipRes;

            sipRes = new  ::QJsonObject(sipCpp->toObject(*a0));
            sipReleaseType(const_cast< ::QJsonObject *>(a0),sipType_QJsonObject,a0State);

            return sipConvertFromNewType(sipRes,sipType_QJsonObject,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QJsonValue, sipName_toObject, doc_QJsonValue_toObject);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QJsonValue_toString, "toString(self) -> str\n"
"toString(self, str) -> str");

extern "C" {static PyObject *meth_QJsonValue_toString(PyObject *, PyObject *);}
static PyObject *meth_QJsonValue_toString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QJsonValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJsonValue, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->toString());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QJsonValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QJsonValue, &sipCpp, sipType_QString,&a0, &a0State))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->toString(*a0));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QJsonValue, sipName_toString, doc_QJsonValue_toString);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QJsonValue_swap, "swap(self, QJsonValue)");

extern "C" {static PyObject *meth_QJsonValue_swap(PyObject *, PyObject *);}
static PyObject *meth_QJsonValue_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QJsonValue* a0;
         ::QJsonValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QJsonValue, &sipCpp, sipType_QJsonValue, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QJsonValue, sipName_swap, doc_QJsonValue_swap);

    return SIP_NULLPTR;
}


extern "C" {static long slot_QJsonValue___hash__(PyObject *);}
static long slot_QJsonValue___hash__(PyObject *sipSelf)
{
     ::QJsonValue *sipCpp = reinterpret_cast< ::QJsonValue *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QJsonValue));

    if (!sipCpp)
        return 0L;


    {
        {
            long sipRes = 0;

#line 91 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qjsonvalue.sip"
        sipRes = qHash(*sipCpp);
#line 590 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQJsonValue.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QJsonValue___getitem__(PyObject *,PyObject *);}
static PyObject *slot_QJsonValue___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QJsonValue *sipCpp = reinterpret_cast< ::QJsonValue *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QJsonValue));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QString,&a0, &a0State))
        {
             ::QJsonValue*sipRes;

            sipRes = new  ::QJsonValue((*sipCpp)[*a0]);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QJsonValue,SIP_NULLPTR);
        }
    }

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
             ::QJsonValue*sipRes;

            sipRes = new  ::QJsonValue((*sipCpp)[a0]);

            return sipConvertFromNewType(sipRes,sipType_QJsonValue,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QJsonValue, sipName___getitem__, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_QJsonValue___ne__(PyObject *,PyObject *);}
static PyObject *slot_QJsonValue___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QJsonValue *sipCpp = reinterpret_cast< ::QJsonValue *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QJsonValue));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QJsonValue* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QJsonValue, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QJsonValue::operator!=(*a0);
            sipReleaseType(const_cast< ::QJsonValue *>(a0),sipType_QJsonValue,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QJsonValue, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QJsonValue___eq__(PyObject *,PyObject *);}
static PyObject *slot_QJsonValue___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QJsonValue *sipCpp = reinterpret_cast< ::QJsonValue *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QJsonValue));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QJsonValue* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QJsonValue, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QJsonValue::operator==(*a0);
            sipReleaseType(const_cast< ::QJsonValue *>(a0),sipType_QJsonValue,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QJsonValue, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QJsonValue(void *, int);}
static void release_QJsonValue(void *sipCppV, int)
{
    delete reinterpret_cast< ::QJsonValue *>(sipCppV);
}


extern "C" {static void *array_QJsonValue(Py_ssize_t);}
static void *array_QJsonValue(Py_ssize_t sipNrElem)
{
    return new  ::QJsonValue[sipNrElem];
}


extern "C" {static void assign_QJsonValue(void *, Py_ssize_t, void *);}
static void assign_QJsonValue(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QJsonValue *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QJsonValue *>(sipSrc);
}


extern "C" {static void *copy_QJsonValue(const void *, Py_ssize_t);}
static void *copy_QJsonValue(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QJsonValue(reinterpret_cast<const  ::QJsonValue *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QJsonValue(sipSimpleWrapper *);}
static void dealloc_QJsonValue(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QJsonValue(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QJsonValue(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QJsonValue(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QJsonValue *sipCpp = SIP_NULLPTR;

    {
         ::QJsonValue::Type a0 = QJsonValue::Null;

        static const char *sipKwdList[] = {
            sipName_type,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|XE", sipType_QJsonValue_Type, &a0))
        {
            sipCpp = new  ::QJsonValue(a0);

            return sipCpp;
        }
    }

    {
        const  ::QJsonValue* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_QJsonValue, &a0, &a0State))
        {
            sipCpp = new  ::QJsonValue(*a0);
            sipReleaseType(const_cast< ::QJsonValue *>(a0),sipType_QJsonValue,a0State);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_QJsonValue(PyObject *, void **, int *, PyObject *);}
static int convertTo_QJsonValue(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QJsonValue **sipCppPtr = reinterpret_cast< ::QJsonValue **>(sipCppPtrV);

#line 30 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qjsonvalue.sip"
if (!sipIsErr)
    return qpycore_canConvertTo_QJsonValue(sipPy);

return qpycore_convertTo_QJsonValue(sipPy, sipTransferObj, sipCppPtr, sipIsErr);
#line 798 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQJsonValue.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QJsonValue[] = {
    {(void *)slot_QJsonValue___hash__, hash_slot},
    {(void *)slot_QJsonValue___getitem__, getitem_slot},
    {(void *)slot_QJsonValue___ne__, ne_slot},
    {(void *)slot_QJsonValue___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QJsonValue[] = {
    {sipName_fromVariant, meth_QJsonValue_fromVariant, METH_VARARGS, doc_QJsonValue_fromVariant},
    {sipName_isArray, meth_QJsonValue_isArray, METH_VARARGS, doc_QJsonValue_isArray},
    {sipName_isBool, meth_QJsonValue_isBool, METH_VARARGS, doc_QJsonValue_isBool},
    {sipName_isDouble, meth_QJsonValue_isDouble, METH_VARARGS, doc_QJsonValue_isDouble},
    {sipName_isNull, meth_QJsonValue_isNull, METH_VARARGS, doc_QJsonValue_isNull},
    {sipName_isObject, meth_QJsonValue_isObject, METH_VARARGS, doc_QJsonValue_isObject},
    {sipName_isString, meth_QJsonValue_isString, METH_VARARGS, doc_QJsonValue_isString},
    {sipName_isUndefined, meth_QJsonValue_isUndefined, METH_VARARGS, doc_QJsonValue_isUndefined},
    {sipName_swap, meth_QJsonValue_swap, METH_VARARGS, doc_QJsonValue_swap},
    {sipName_toArray, meth_QJsonValue_toArray, METH_VARARGS, doc_QJsonValue_toArray},
    {sipName_toBool, SIP_MLMETH_CAST(meth_QJsonValue_toBool), METH_VARARGS|METH_KEYWORDS, doc_QJsonValue_toBool},
    {sipName_toDouble, SIP_MLMETH_CAST(meth_QJsonValue_toDouble), METH_VARARGS|METH_KEYWORDS, doc_QJsonValue_toDouble},
    {sipName_toInt, SIP_MLMETH_CAST(meth_QJsonValue_toInt), METH_VARARGS|METH_KEYWORDS, doc_QJsonValue_toInt},
    {sipName_toObject, meth_QJsonValue_toObject, METH_VARARGS, doc_QJsonValue_toObject},
    {sipName_toString, meth_QJsonValue_toString, METH_VARARGS, doc_QJsonValue_toString},
    {sipName_toVariant, meth_QJsonValue_toVariant, METH_VARARGS, doc_QJsonValue_toVariant},
    {sipName_type, meth_QJsonValue_type, METH_VARARGS, doc_QJsonValue_type}
};

static sipEnumMemberDef enummembers_QJsonValue[] = {
    {sipName_Array, static_cast<int>( ::QJsonValue::Array), 112},
    {sipName_Bool, static_cast<int>( ::QJsonValue::Bool), 112},
    {sipName_Double, static_cast<int>( ::QJsonValue::Double), 112},
    {sipName_Null, static_cast<int>( ::QJsonValue::Null), 112},
    {sipName_Object, static_cast<int>( ::QJsonValue::Object), 112},
    {sipName_String, static_cast<int>( ::QJsonValue::String), 112},
    {sipName_Undefined, static_cast<int>( ::QJsonValue::Undefined), 112},
};

PyDoc_STRVAR(doc_QJsonValue, "\1QJsonValue(type: QJsonValue.Type = QJsonValue.Null)\n"
"QJsonValue(Union[QJsonValue, QJsonValue.Type, Dict[str, QJsonValue], bool, int, float, str])");


static pyqt5ClassPluginDef plugin_QJsonValue = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QJsonValue = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QJsonValue,
        SIP_NULLPTR,
        &plugin_QJsonValue
    },
    {
        sipNameNr_QJsonValue,
        {0, 0, 1},
        17, methods_QJsonValue,
        7, enummembers_QJsonValue,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QJsonValue,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QJsonValue,
    init_type_QJsonValue,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QJsonValue,
    assign_QJsonValue,
    array_QJsonValue,
    copy_QJsonValue,
    release_QJsonValue,
    SIP_NULLPTR,
    convertTo_QJsonValue,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
