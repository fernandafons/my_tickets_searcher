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

#include "sipAPIQtSql.h"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtSql/qsqlrecord.sip"
#include <qsqlrecord.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtSql/sipQtSqlQSqlRecord.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtSql/sipQtSqlQSqlRecord.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtSql/qsqlfield.sip"
#include <qsqlfield.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtSql/sipQtSqlQSqlRecord.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtSql/sipQtSqlQSqlRecord.cpp"


PyDoc_STRVAR(doc_QSqlRecord_value, "value(self, int) -> Any\n"
"value(self, str) -> Any");

extern "C" {static PyObject *meth_QSqlRecord_value(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_value(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSqlRecord, &sipCpp, &a0))
        {
             ::QVariant*sipRes;

            sipRes = new  ::QVariant(sipCpp->value(a0));

            return sipConvertFromNewType(sipRes,sipType_QVariant,SIP_NULLPTR);
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSqlRecord, &sipCpp, sipType_QString,&a0, &a0State))
        {
             ::QVariant*sipRes;

            sipRes = new  ::QVariant(sipCpp->value(*a0));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QVariant,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_value, doc_QSqlRecord_value);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QSqlRecord_setValue, "setValue(self, int, Any)\n"
"setValue(self, str, Any)");

extern "C" {static PyObject *meth_QSqlRecord_setValue(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_setValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::QVariant* a1;
        int a1State = 0;
         ::QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ1", &sipSelf, sipType_QSqlRecord, &sipCpp, &a0, sipType_QVariant, &a1, &a1State))
        {
            sipCpp->setValue(a0,*a1);
            sipReleaseType(const_cast< ::QVariant *>(a1),sipType_QVariant,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QVariant* a1;
        int a1State = 0;
         ::QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QSqlRecord, &sipCpp, sipType_QString,&a0, &a0State, sipType_QVariant, &a1, &a1State))
        {
            sipCpp->setValue(*a0,*a1);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QVariant *>(a1),sipType_QVariant,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_setValue, doc_QSqlRecord_setValue);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QSqlRecord_setNull, "setNull(self, int)\n"
"setNull(self, str)");

extern "C" {static PyObject *meth_QSqlRecord_setNull(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_setNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSqlRecord, &sipCpp, &a0))
        {
            sipCpp->setNull(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSqlRecord, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setNull(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_setNull, doc_QSqlRecord_setNull);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QSqlRecord_isNull, "isNull(self, int) -> bool\n"
"isNull(self, str) -> bool");

extern "C" {static PyObject *meth_QSqlRecord_isNull(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSqlRecord, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->isNull(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSqlRecord, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->isNull(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_isNull, doc_QSqlRecord_isNull);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QSqlRecord_indexOf, "indexOf(self, str) -> int");

extern "C" {static PyObject *meth_QSqlRecord_indexOf(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_indexOf(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSqlRecord, &sipCpp, sipType_QString,&a0, &a0State))
        {
            int sipRes;

            sipRes = sipCpp->indexOf(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_indexOf, doc_QSqlRecord_indexOf);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QSqlRecord_fieldName, "fieldName(self, int) -> str");

extern "C" {static PyObject *meth_QSqlRecord_fieldName(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_fieldName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSqlRecord, &sipCpp, &a0))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->fieldName(a0));

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_fieldName, doc_QSqlRecord_fieldName);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QSqlRecord_field, "field(self, int) -> QSqlField\n"
"field(self, str) -> QSqlField");

extern "C" {static PyObject *meth_QSqlRecord_field(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_field(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSqlRecord, &sipCpp, &a0))
        {
             ::QSqlField*sipRes;

            sipRes = new  ::QSqlField(sipCpp->field(a0));

            return sipConvertFromNewType(sipRes,sipType_QSqlField,SIP_NULLPTR);
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSqlRecord, &sipCpp, sipType_QString,&a0, &a0State))
        {
             ::QSqlField*sipRes;

            sipRes = new  ::QSqlField(sipCpp->field(*a0));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSqlField,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_field, doc_QSqlRecord_field);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QSqlRecord_isGenerated, "isGenerated(self, int) -> bool\n"
"isGenerated(self, str) -> bool");

extern "C" {static PyObject *meth_QSqlRecord_isGenerated(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_isGenerated(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSqlRecord, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->isGenerated(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSqlRecord, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->isGenerated(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_isGenerated, doc_QSqlRecord_isGenerated);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QSqlRecord_setGenerated, "setGenerated(self, str, bool)\n"
"setGenerated(self, int, bool)");

extern "C" {static PyObject *meth_QSqlRecord_setGenerated(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_setGenerated(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
        bool a1;
         ::QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1b", &sipSelf, sipType_QSqlRecord, &sipCpp, sipType_QString,&a0, &a0State, &a1))
        {
            sipCpp->setGenerated(*a0,a1);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        int a0;
        bool a1;
         ::QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bib", &sipSelf, sipType_QSqlRecord, &sipCpp, &a0, &a1))
        {
            sipCpp->setGenerated(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_setGenerated, doc_QSqlRecord_setGenerated);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QSqlRecord_append, "append(self, QSqlField)");

extern "C" {static PyObject *meth_QSqlRecord_append(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_append(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QSqlField* a0;
         ::QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSqlRecord, &sipCpp, sipType_QSqlField, &a0))
        {
            sipCpp->append(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_append, doc_QSqlRecord_append);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QSqlRecord_replace, "replace(self, int, QSqlField)");

extern "C" {static PyObject *meth_QSqlRecord_replace(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_replace(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::QSqlField* a1;
         ::QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ9", &sipSelf, sipType_QSqlRecord, &sipCpp, &a0, sipType_QSqlField, &a1))
        {
            sipCpp->replace(a0,*a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_replace, doc_QSqlRecord_replace);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QSqlRecord_insert, "insert(self, int, QSqlField)");

extern "C" {static PyObject *meth_QSqlRecord_insert(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_insert(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::QSqlField* a1;
         ::QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ9", &sipSelf, sipType_QSqlRecord, &sipCpp, &a0, sipType_QSqlField, &a1))
        {
            sipCpp->insert(a0,*a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_insert, doc_QSqlRecord_insert);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QSqlRecord_remove, "remove(self, int)");

extern "C" {static PyObject *meth_QSqlRecord_remove(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_remove(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSqlRecord, &sipCpp, &a0))
        {
            sipCpp->remove(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_remove, doc_QSqlRecord_remove);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QSqlRecord_isEmpty, "isEmpty(self) -> bool");

extern "C" {static PyObject *meth_QSqlRecord_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlRecord, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isEmpty();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_isEmpty, doc_QSqlRecord_isEmpty);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QSqlRecord_contains, "contains(self, str) -> bool");

extern "C" {static PyObject *meth_QSqlRecord_contains(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_contains(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSqlRecord, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->contains(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_contains, doc_QSqlRecord_contains);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QSqlRecord_clear, "clear(self)");

extern "C" {static PyObject *meth_QSqlRecord_clear(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlRecord, &sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_clear, doc_QSqlRecord_clear);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QSqlRecord_clearValues, "clearValues(self)");

extern "C" {static PyObject *meth_QSqlRecord_clearValues(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_clearValues(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlRecord, &sipCpp))
        {
            sipCpp->clearValues();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_clearValues, doc_QSqlRecord_clearValues);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QSqlRecord_count, "count(self) -> int");

extern "C" {static PyObject *meth_QSqlRecord_count(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlRecord, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->count();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_count, doc_QSqlRecord_count);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QSqlRecord_keyValues, "keyValues(self, QSqlRecord) -> QSqlRecord");

extern "C" {static PyObject *meth_QSqlRecord_keyValues(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_keyValues(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QSqlRecord* a0;
        const  ::QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSqlRecord, &sipCpp, sipType_QSqlRecord, &a0))
        {
             ::QSqlRecord*sipRes;

            sipRes = new  ::QSqlRecord(sipCpp->keyValues(*a0));

            return sipConvertFromNewType(sipRes,sipType_QSqlRecord,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_keyValues, doc_QSqlRecord_keyValues);

    return SIP_NULLPTR;
}


extern "C" {static Py_ssize_t slot_QSqlRecord___len__(PyObject *);}
static Py_ssize_t slot_QSqlRecord___len__(PyObject *sipSelf)
{
     ::QSqlRecord *sipCpp = reinterpret_cast< ::QSqlRecord *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSqlRecord));

    if (!sipCpp)
        return 0;


    {
        {
            Py_ssize_t sipRes = 0;

#line 1 "Auto-generated"
            sipRes = (Py_ssize_t)sipCpp->count();
#line 713 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtSql/sipQtSqlQSqlRecord.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QSqlRecord___ne__(PyObject *,PyObject *);}
static PyObject *slot_QSqlRecord___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QSqlRecord *sipCpp = reinterpret_cast< ::QSqlRecord *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSqlRecord));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QSqlRecord* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSqlRecord, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QSqlRecord::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtSql, ne_slot, sipType_QSqlRecord, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QSqlRecord___eq__(PyObject *,PyObject *);}
static PyObject *slot_QSqlRecord___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QSqlRecord *sipCpp = reinterpret_cast< ::QSqlRecord *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSqlRecord));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QSqlRecord* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSqlRecord, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QSqlRecord::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtSql, eq_slot, sipType_QSqlRecord, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QSqlRecord(void *, int);}
static void release_QSqlRecord(void *sipCppV, int)
{
    delete reinterpret_cast< ::QSqlRecord *>(sipCppV);
}


extern "C" {static void *array_QSqlRecord(Py_ssize_t);}
static void *array_QSqlRecord(Py_ssize_t sipNrElem)
{
    return new  ::QSqlRecord[sipNrElem];
}


extern "C" {static void assign_QSqlRecord(void *, Py_ssize_t, void *);}
static void assign_QSqlRecord(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QSqlRecord *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QSqlRecord *>(sipSrc);
}


extern "C" {static void *copy_QSqlRecord(const void *, Py_ssize_t);}
static void *copy_QSqlRecord(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QSqlRecord(reinterpret_cast<const  ::QSqlRecord *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSqlRecord(sipSimpleWrapper *);}
static void dealloc_QSqlRecord(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QSqlRecord(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QSqlRecord(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSqlRecord(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QSqlRecord *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QSqlRecord();

            return sipCpp;
        }
    }

    {
        const  ::QSqlRecord* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QSqlRecord, &a0))
        {
            sipCpp = new  ::QSqlRecord(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSqlRecord[] = {
    {(void *)slot_QSqlRecord___len__, len_slot},
    {(void *)slot_QSqlRecord___ne__, ne_slot},
    {(void *)slot_QSqlRecord___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QSqlRecord[] = {
    {sipName_append, meth_QSqlRecord_append, METH_VARARGS, doc_QSqlRecord_append},
    {sipName_clear, meth_QSqlRecord_clear, METH_VARARGS, doc_QSqlRecord_clear},
    {sipName_clearValues, meth_QSqlRecord_clearValues, METH_VARARGS, doc_QSqlRecord_clearValues},
    {sipName_contains, meth_QSqlRecord_contains, METH_VARARGS, doc_QSqlRecord_contains},
    {sipName_count, meth_QSqlRecord_count, METH_VARARGS, doc_QSqlRecord_count},
    {sipName_field, meth_QSqlRecord_field, METH_VARARGS, doc_QSqlRecord_field},
    {sipName_fieldName, meth_QSqlRecord_fieldName, METH_VARARGS, doc_QSqlRecord_fieldName},
    {sipName_indexOf, meth_QSqlRecord_indexOf, METH_VARARGS, doc_QSqlRecord_indexOf},
    {sipName_insert, meth_QSqlRecord_insert, METH_VARARGS, doc_QSqlRecord_insert},
    {sipName_isEmpty, meth_QSqlRecord_isEmpty, METH_VARARGS, doc_QSqlRecord_isEmpty},
    {sipName_isGenerated, meth_QSqlRecord_isGenerated, METH_VARARGS, doc_QSqlRecord_isGenerated},
    {sipName_isNull, meth_QSqlRecord_isNull, METH_VARARGS, doc_QSqlRecord_isNull},
    {sipName_keyValues, meth_QSqlRecord_keyValues, METH_VARARGS, doc_QSqlRecord_keyValues},
    {sipName_remove, meth_QSqlRecord_remove, METH_VARARGS, doc_QSqlRecord_remove},
    {sipName_replace, meth_QSqlRecord_replace, METH_VARARGS, doc_QSqlRecord_replace},
    {sipName_setGenerated, meth_QSqlRecord_setGenerated, METH_VARARGS, doc_QSqlRecord_setGenerated},
    {sipName_setNull, meth_QSqlRecord_setNull, METH_VARARGS, doc_QSqlRecord_setNull},
    {sipName_setValue, meth_QSqlRecord_setValue, METH_VARARGS, doc_QSqlRecord_setValue},
    {sipName_value, meth_QSqlRecord_value, METH_VARARGS, doc_QSqlRecord_value}
};

PyDoc_STRVAR(doc_QSqlRecord, "\1QSqlRecord()\n"
"QSqlRecord(QSqlRecord)");


static pyqt5ClassPluginDef plugin_QSqlRecord = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtSql_QSqlRecord = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QSqlRecord,
        SIP_NULLPTR,
        &plugin_QSqlRecord
    },
    {
        sipNameNr_QSqlRecord,
        {0, 0, 1},
        19, methods_QSqlRecord,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QSqlRecord,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QSqlRecord,
    init_type_QSqlRecord,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QSqlRecord,
    assign_QSqlRecord,
    array_QSqlRecord,
    copy_QSqlRecord,
    release_QSqlRecord,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
