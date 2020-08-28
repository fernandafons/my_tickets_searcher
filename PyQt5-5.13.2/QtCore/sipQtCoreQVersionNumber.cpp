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

#line 34 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qversionnumber.sip"
#include <qversionnumber.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQVersionNumber.cpp"

#line 328 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qpycore_qvector.sip"
#include <qvector.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQVersionNumber.cpp"
#line 27 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQVersionNumber.cpp"


PyDoc_STRVAR(doc_QVersionNumber_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QVersionNumber_isNull(PyObject *, PyObject *);}
static PyObject *meth_QVersionNumber_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QVersionNumber *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVersionNumber, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QVersionNumber, sipName_isNull, doc_QVersionNumber_isNull);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QVersionNumber_isNormalized, "isNormalized(self) -> bool");

extern "C" {static PyObject *meth_QVersionNumber_isNormalized(PyObject *, PyObject *);}
static PyObject *meth_QVersionNumber_isNormalized(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QVersionNumber *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVersionNumber, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNormalized();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QVersionNumber, sipName_isNormalized, doc_QVersionNumber_isNormalized);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QVersionNumber_majorVersion, "majorVersion(self) -> int");

extern "C" {static PyObject *meth_QVersionNumber_majorVersion(PyObject *, PyObject *);}
static PyObject *meth_QVersionNumber_majorVersion(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QVersionNumber *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVersionNumber, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->majorVersion();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QVersionNumber, sipName_majorVersion, doc_QVersionNumber_majorVersion);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QVersionNumber_minorVersion, "minorVersion(self) -> int");

extern "C" {static PyObject *meth_QVersionNumber_minorVersion(PyObject *, PyObject *);}
static PyObject *meth_QVersionNumber_minorVersion(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QVersionNumber *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVersionNumber, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->minorVersion();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QVersionNumber, sipName_minorVersion, doc_QVersionNumber_minorVersion);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QVersionNumber_microVersion, "microVersion(self) -> int");

extern "C" {static PyObject *meth_QVersionNumber_microVersion(PyObject *, PyObject *);}
static PyObject *meth_QVersionNumber_microVersion(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QVersionNumber *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVersionNumber, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->microVersion();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QVersionNumber, sipName_microVersion, doc_QVersionNumber_microVersion);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QVersionNumber_normalized, "normalized(self) -> QVersionNumber");

extern "C" {static PyObject *meth_QVersionNumber_normalized(PyObject *, PyObject *);}
static PyObject *meth_QVersionNumber_normalized(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QVersionNumber *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVersionNumber, &sipCpp))
        {
             ::QVersionNumber*sipRes;

            sipRes = new  ::QVersionNumber(sipCpp->normalized());

            return sipConvertFromNewType(sipRes,sipType_QVersionNumber,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QVersionNumber, sipName_normalized, doc_QVersionNumber_normalized);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QVersionNumber_segments, "segments(self) -> List[int]");

extern "C" {static PyObject *meth_QVersionNumber_segments(PyObject *, PyObject *);}
static PyObject *meth_QVersionNumber_segments(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QVersionNumber *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVersionNumber, &sipCpp))
        {
             ::QVector<int>*sipRes;

            sipRes = new  ::QVector<int>(sipCpp->segments());

            return sipConvertFromNewType(sipRes,sipType_QVector_1800,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QVersionNumber, sipName_segments, doc_QVersionNumber_segments);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QVersionNumber_segmentAt, "segmentAt(self, int) -> int");

extern "C" {static PyObject *meth_QVersionNumber_segmentAt(PyObject *, PyObject *);}
static PyObject *meth_QVersionNumber_segmentAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::QVersionNumber *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QVersionNumber, &sipCpp, &a0))
        {
            int sipRes;

            sipRes = sipCpp->segmentAt(a0);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QVersionNumber, sipName_segmentAt, doc_QVersionNumber_segmentAt);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QVersionNumber_segmentCount, "segmentCount(self) -> int");

extern "C" {static PyObject *meth_QVersionNumber_segmentCount(PyObject *, PyObject *);}
static PyObject *meth_QVersionNumber_segmentCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QVersionNumber *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVersionNumber, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->segmentCount();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QVersionNumber, sipName_segmentCount, doc_QVersionNumber_segmentCount);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QVersionNumber_isPrefixOf, "isPrefixOf(self, QVersionNumber) -> bool");

extern "C" {static PyObject *meth_QVersionNumber_isPrefixOf(PyObject *, PyObject *);}
static PyObject *meth_QVersionNumber_isPrefixOf(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QVersionNumber* a0;
        const  ::QVersionNumber *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QVersionNumber, &sipCpp, sipType_QVersionNumber, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->isPrefixOf(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QVersionNumber, sipName_isPrefixOf, doc_QVersionNumber_isPrefixOf);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QVersionNumber_compare, "compare(QVersionNumber, QVersionNumber) -> int");

extern "C" {static PyObject *meth_QVersionNumber_compare(PyObject *, PyObject *);}
static PyObject *meth_QVersionNumber_compare(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QVersionNumber* a0;
        const  ::QVersionNumber* a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9J9", sipType_QVersionNumber, &a0, sipType_QVersionNumber, &a1))
        {
            int sipRes;

            sipRes =  ::QVersionNumber::compare(*a0,*a1);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QVersionNumber, sipName_compare, doc_QVersionNumber_compare);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QVersionNumber_commonPrefix, "commonPrefix(QVersionNumber, QVersionNumber) -> QVersionNumber");

extern "C" {static PyObject *meth_QVersionNumber_commonPrefix(PyObject *, PyObject *);}
static PyObject *meth_QVersionNumber_commonPrefix(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QVersionNumber* a0;
        const  ::QVersionNumber* a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9J9", sipType_QVersionNumber, &a0, sipType_QVersionNumber, &a1))
        {
             ::QVersionNumber*sipRes;

            sipRes = new  ::QVersionNumber( ::QVersionNumber::commonPrefix(*a0,*a1));

            return sipConvertFromNewType(sipRes,sipType_QVersionNumber,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QVersionNumber, sipName_commonPrefix, doc_QVersionNumber_commonPrefix);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QVersionNumber_toString, "toString(self) -> str");

extern "C" {static PyObject *meth_QVersionNumber_toString(PyObject *, PyObject *);}
static PyObject *meth_QVersionNumber_toString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QVersionNumber *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVersionNumber, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->toString());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QVersionNumber, sipName_toString, doc_QVersionNumber_toString);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QVersionNumber_fromString, "fromString(str) -> Tuple[QVersionNumber, int]");

extern "C" {static PyObject *meth_QVersionNumber_fromString(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QVersionNumber_fromString(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
        int a1;

        static const char *sipKwdList[] = {
            SIP_NULLPTR,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "J1", sipType_QString,&a0, &a0State))
        {
             ::QVersionNumber*sipRes;

            sipRes = new  ::QVersionNumber( ::QVersionNumber::fromString(*a0,&a1));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            PyObject *sipResObj = sipConvertFromNewType(sipRes,sipType_QVersionNumber,SIP_NULLPTR);
            return sipBuildResult(0,"(Ri)",sipResObj,a1);
        }
    }

    sipNoMethod(sipParseErr, sipName_QVersionNumber, sipName_fromString, doc_QVersionNumber_fromString);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_QVersionNumber___eq__(PyObject *,PyObject *);}
static PyObject *slot_QVersionNumber___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QVersionNumber *sipCpp = reinterpret_cast< ::QVersionNumber *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVersionNumber));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QVersionNumber* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QVersionNumber, &a0))
        {
            bool sipRes;

            sipRes = operator==((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QVersionNumber, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QVersionNumber___ne__(PyObject *,PyObject *);}
static PyObject *slot_QVersionNumber___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QVersionNumber *sipCpp = reinterpret_cast< ::QVersionNumber *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVersionNumber));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QVersionNumber* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QVersionNumber, &a0))
        {
            bool sipRes;

            sipRes = operator!=((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QVersionNumber, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QVersionNumber___lt__(PyObject *,PyObject *);}
static PyObject *slot_QVersionNumber___lt__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QVersionNumber *sipCpp = reinterpret_cast< ::QVersionNumber *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVersionNumber));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QVersionNumber* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QVersionNumber, &a0))
        {
            bool sipRes;

            sipRes = operator<((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, lt_slot, sipType_QVersionNumber, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QVersionNumber___le__(PyObject *,PyObject *);}
static PyObject *slot_QVersionNumber___le__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QVersionNumber *sipCpp = reinterpret_cast< ::QVersionNumber *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVersionNumber));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QVersionNumber* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QVersionNumber, &a0))
        {
            bool sipRes;

            sipRes = operator<=((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, le_slot, sipType_QVersionNumber, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QVersionNumber___gt__(PyObject *,PyObject *);}
static PyObject *slot_QVersionNumber___gt__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QVersionNumber *sipCpp = reinterpret_cast< ::QVersionNumber *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVersionNumber));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QVersionNumber* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QVersionNumber, &a0))
        {
            bool sipRes;

            sipRes = operator>((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, gt_slot, sipType_QVersionNumber, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QVersionNumber___ge__(PyObject *,PyObject *);}
static PyObject *slot_QVersionNumber___ge__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QVersionNumber *sipCpp = reinterpret_cast< ::QVersionNumber *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVersionNumber));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QVersionNumber* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QVersionNumber, &a0))
        {
            bool sipRes;

            sipRes = operator>=((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ge_slot, sipType_QVersionNumber, sipSelf, sipArg);
}


extern "C" {static long slot_QVersionNumber___hash__(PyObject *);}
static long slot_QVersionNumber___hash__(PyObject *sipSelf)
{
     ::QVersionNumber *sipCpp = reinterpret_cast< ::QVersionNumber *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVersionNumber));

    if (!sipCpp)
        return 0L;


    {
        {
            long sipRes = 0;

#line 59 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qversionnumber.sip"
        sipRes = qHash(*sipCpp);
#line 636 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQVersionNumber.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QVersionNumber(void *, int);}
static void release_QVersionNumber(void *sipCppV, int)
{
    delete reinterpret_cast< ::QVersionNumber *>(sipCppV);
}


extern "C" {static void *array_QVersionNumber(Py_ssize_t);}
static void *array_QVersionNumber(Py_ssize_t sipNrElem)
{
    return new  ::QVersionNumber[sipNrElem];
}


extern "C" {static void assign_QVersionNumber(void *, Py_ssize_t, void *);}
static void assign_QVersionNumber(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QVersionNumber *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QVersionNumber *>(sipSrc);
}


extern "C" {static void *copy_QVersionNumber(const void *, Py_ssize_t);}
static void *copy_QVersionNumber(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QVersionNumber(reinterpret_cast<const  ::QVersionNumber *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QVersionNumber(sipSimpleWrapper *);}
static void dealloc_QVersionNumber(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QVersionNumber(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QVersionNumber(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QVersionNumber(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QVersionNumber *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QVersionNumber();

            return sipCpp;
        }
    }

    {
        const  ::QVector<int>* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_QVector_1800,&a0, &a0State))
        {
            sipCpp = new  ::QVersionNumber(*a0);
            sipReleaseType(const_cast< ::QVector<int> *>(a0),sipType_QVector_1800,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QVersionNumber(a0);

            return sipCpp;
        }
    }

    {
        int a0;
        int a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "ii", &a0, &a1))
        {
            sipCpp = new  ::QVersionNumber(a0,a1);

            return sipCpp;
        }
    }

    {
        int a0;
        int a1;
        int a2;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "iii", &a0, &a1, &a2))
        {
            sipCpp = new  ::QVersionNumber(a0,a1,a2);

            return sipCpp;
        }
    }

    {
        const  ::QVersionNumber* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QVersionNumber, &a0))
        {
            sipCpp = new  ::QVersionNumber(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QVersionNumber[] = {
    {(void *)slot_QVersionNumber___eq__, eq_slot},
    {(void *)slot_QVersionNumber___ne__, ne_slot},
    {(void *)slot_QVersionNumber___lt__, lt_slot},
    {(void *)slot_QVersionNumber___le__, le_slot},
    {(void *)slot_QVersionNumber___gt__, gt_slot},
    {(void *)slot_QVersionNumber___ge__, ge_slot},
    {(void *)slot_QVersionNumber___hash__, hash_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QVersionNumber[] = {
    {sipName_commonPrefix, meth_QVersionNumber_commonPrefix, METH_VARARGS, doc_QVersionNumber_commonPrefix},
    {sipName_compare, meth_QVersionNumber_compare, METH_VARARGS, doc_QVersionNumber_compare},
    {sipName_fromString, SIP_MLMETH_CAST(meth_QVersionNumber_fromString), METH_VARARGS|METH_KEYWORDS, doc_QVersionNumber_fromString},
    {sipName_isNormalized, meth_QVersionNumber_isNormalized, METH_VARARGS, doc_QVersionNumber_isNormalized},
    {sipName_isNull, meth_QVersionNumber_isNull, METH_VARARGS, doc_QVersionNumber_isNull},
    {sipName_isPrefixOf, meth_QVersionNumber_isPrefixOf, METH_VARARGS, doc_QVersionNumber_isPrefixOf},
    {sipName_majorVersion, meth_QVersionNumber_majorVersion, METH_VARARGS, doc_QVersionNumber_majorVersion},
    {sipName_microVersion, meth_QVersionNumber_microVersion, METH_VARARGS, doc_QVersionNumber_microVersion},
    {sipName_minorVersion, meth_QVersionNumber_minorVersion, METH_VARARGS, doc_QVersionNumber_minorVersion},
    {sipName_normalized, meth_QVersionNumber_normalized, METH_VARARGS, doc_QVersionNumber_normalized},
    {sipName_segmentAt, meth_QVersionNumber_segmentAt, METH_VARARGS, doc_QVersionNumber_segmentAt},
    {sipName_segmentCount, meth_QVersionNumber_segmentCount, METH_VARARGS, doc_QVersionNumber_segmentCount},
    {sipName_segments, meth_QVersionNumber_segments, METH_VARARGS, doc_QVersionNumber_segments},
    {sipName_toString, meth_QVersionNumber_toString, METH_VARARGS, doc_QVersionNumber_toString}
};

PyDoc_STRVAR(doc_QVersionNumber, "\1QVersionNumber()\n"
"QVersionNumber(Iterable[int])\n"
"QVersionNumber(int)\n"
"QVersionNumber(int, int)\n"
"QVersionNumber(int, int, int)\n"
"QVersionNumber(QVersionNumber)");


static pyqt5ClassPluginDef plugin_QVersionNumber = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QVersionNumber = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QVersionNumber,
        SIP_NULLPTR,
        &plugin_QVersionNumber
    },
    {
        sipNameNr_QVersionNumber,
        {0, 0, 1},
        14, methods_QVersionNumber,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QVersionNumber,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QVersionNumber,
    init_type_QVersionNumber,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QVersionNumber,
    assign_QVersionNumber,
    array_QVersionNumber,
    copy_QVersionNumber,
    release_QVersionNumber,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};