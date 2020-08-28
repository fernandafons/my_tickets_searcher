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

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qkeysequence.sip"
#include <qkeysequence.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQKeySequence.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQKeySequence.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQKeySequence.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQKeySequence.cpp"


PyDoc_STRVAR(doc_QKeySequence_count, "count(self) -> int");

extern "C" {static PyObject *meth_QKeySequence_count(PyObject *, PyObject *);}
static PyObject *meth_QKeySequence_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QKeySequence *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QKeySequence, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->count();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName_count, doc_QKeySequence_count);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QKeySequence_isEmpty, "isEmpty(self) -> bool");

extern "C" {static PyObject *meth_QKeySequence_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QKeySequence_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QKeySequence *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QKeySequence, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isEmpty();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName_isEmpty, doc_QKeySequence_isEmpty);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QKeySequence_matches, "matches(self, Union[QKeySequence, QKeySequence.StandardKey, str, int]) -> QKeySequence.SequenceMatch");

extern "C" {static PyObject *meth_QKeySequence_matches(PyObject *, PyObject *);}
static PyObject *meth_QKeySequence_matches(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QKeySequence* a0;
        int a0State = 0;
        const  ::QKeySequence *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QKeySequence, &sipCpp, sipType_QKeySequence, &a0, &a0State))
        {
             ::QKeySequence::SequenceMatch sipRes;

            sipRes = sipCpp->matches(*a0);
            sipReleaseType(const_cast< ::QKeySequence *>(a0),sipType_QKeySequence,a0State);

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QKeySequence_SequenceMatch);
        }
    }

    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName_matches, doc_QKeySequence_matches);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QKeySequence_mnemonic, "mnemonic(str) -> QKeySequence");

extern "C" {static PyObject *meth_QKeySequence_mnemonic(PyObject *, PyObject *);}
static PyObject *meth_QKeySequence_mnemonic(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
             ::QKeySequence*sipRes;

            sipRes = new  ::QKeySequence( ::QKeySequence::mnemonic(*a0));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QKeySequence,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName_mnemonic, doc_QKeySequence_mnemonic);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QKeySequence_isDetached, "isDetached(self) -> bool");

extern "C" {static PyObject *meth_QKeySequence_isDetached(PyObject *, PyObject *);}
static PyObject *meth_QKeySequence_isDetached(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QKeySequence *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QKeySequence, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isDetached();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName_isDetached, doc_QKeySequence_isDetached);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QKeySequence_swap, "swap(self, QKeySequence)");

extern "C" {static PyObject *meth_QKeySequence_swap(PyObject *, PyObject *);}
static PyObject *meth_QKeySequence_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QKeySequence* a0;
         ::QKeySequence *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QKeySequence, &sipCpp, sipType_QKeySequence, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName_swap, doc_QKeySequence_swap);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QKeySequence_toString, "toString(self, format: QKeySequence.SequenceFormat = QKeySequence.PortableText) -> str");

extern "C" {static PyObject *meth_QKeySequence_toString(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QKeySequence_toString(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QKeySequence::SequenceFormat a0 = QKeySequence::PortableText;
        const  ::QKeySequence *sipCpp;

        static const char *sipKwdList[] = {
            sipName_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|E", &sipSelf, sipType_QKeySequence, &sipCpp, sipType_QKeySequence_SequenceFormat, &a0))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->toString(a0));

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName_toString, doc_QKeySequence_toString);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QKeySequence_fromString, "fromString(str, format: QKeySequence.SequenceFormat = QKeySequence.PortableText) -> QKeySequence");

extern "C" {static PyObject *meth_QKeySequence_fromString(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QKeySequence_fromString(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QKeySequence::SequenceFormat a1 = QKeySequence::PortableText;

        static const char *sipKwdList[] = {
            SIP_NULLPTR,
            sipName_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "J1|E", sipType_QString,&a0, &a0State, sipType_QKeySequence_SequenceFormat, &a1))
        {
             ::QKeySequence*sipRes;

            sipRes = new  ::QKeySequence( ::QKeySequence::fromString(*a0,a1));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QKeySequence,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName_fromString, doc_QKeySequence_fromString);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QKeySequence_keyBindings, "keyBindings(QKeySequence.StandardKey) -> List[QKeySequence]");

extern "C" {static PyObject *meth_QKeySequence_keyBindings(PyObject *, PyObject *);}
static PyObject *meth_QKeySequence_keyBindings(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QKeySequence::StandardKey a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "E", sipType_QKeySequence_StandardKey, &a0))
        {
            QList< ::QKeySequence>*sipRes;

            sipRes = new QList< ::QKeySequence>( ::QKeySequence::keyBindings(a0));

            return sipConvertFromNewType(sipRes,sipType_QList_0100QKeySequence,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName_keyBindings, doc_QKeySequence_keyBindings);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QKeySequence_listFromString, "listFromString(str, format: QKeySequence.SequenceFormat = QKeySequence.PortableText) -> List[QKeySequence]");

extern "C" {static PyObject *meth_QKeySequence_listFromString(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QKeySequence_listFromString(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QKeySequence::SequenceFormat a1 = QKeySequence::PortableText;

        static const char *sipKwdList[] = {
            SIP_NULLPTR,
            sipName_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "J1|E", sipType_QString,&a0, &a0State, sipType_QKeySequence_SequenceFormat, &a1))
        {
            QList< ::QKeySequence>*sipRes;

            sipRes = new QList< ::QKeySequence>( ::QKeySequence::listFromString(*a0,a1));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QList_0100QKeySequence,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName_listFromString, doc_QKeySequence_listFromString);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QKeySequence_listToString, "listToString(Iterable[Union[QKeySequence, QKeySequence.StandardKey, str, int]], format: QKeySequence.SequenceFormat = QKeySequence.PortableText) -> str");

extern "C" {static PyObject *meth_QKeySequence_listToString(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QKeySequence_listToString(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const QList< ::QKeySequence>* a0;
        int a0State = 0;
         ::QKeySequence::SequenceFormat a1 = QKeySequence::PortableText;

        static const char *sipKwdList[] = {
            SIP_NULLPTR,
            sipName_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "J1|E", sipType_QList_0100QKeySequence,&a0, &a0State, sipType_QKeySequence_SequenceFormat, &a1))
        {
             ::QString*sipRes;

            sipRes = new  ::QString( ::QKeySequence::listToString(*a0,a1));
            sipReleaseType(const_cast<QList< ::QKeySequence> *>(a0),sipType_QList_0100QKeySequence,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName_listToString, doc_QKeySequence_listToString);

    return SIP_NULLPTR;
}


extern "C" {static long slot_QKeySequence___hash__(PyObject *);}
static long slot_QKeySequence___hash__(PyObject *sipSelf)
{
     ::QKeySequence *sipCpp = reinterpret_cast< ::QKeySequence *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QKeySequence));

    if (!sipCpp)
        return 0L;


    {
        {
            long sipRes = 0;

#line 238 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qkeysequence.sip"
        sipRes = qHash(*sipCpp);
#line 388 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQKeySequence.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QKeySequence___ge__(PyObject *,PyObject *);}
static PyObject *slot_QKeySequence___ge__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QKeySequence *sipCpp = reinterpret_cast< ::QKeySequence *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QKeySequence));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QKeySequence* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QKeySequence, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QKeySequence::operator>=(*a0);
            sipReleaseType(const_cast< ::QKeySequence *>(a0),sipType_QKeySequence,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtGui, ge_slot, sipType_QKeySequence, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QKeySequence___le__(PyObject *,PyObject *);}
static PyObject *slot_QKeySequence___le__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QKeySequence *sipCpp = reinterpret_cast< ::QKeySequence *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QKeySequence));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QKeySequence* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QKeySequence, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QKeySequence::operator<=(*a0);
            sipReleaseType(const_cast< ::QKeySequence *>(a0),sipType_QKeySequence,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtGui, le_slot, sipType_QKeySequence, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QKeySequence___gt__(PyObject *,PyObject *);}
static PyObject *slot_QKeySequence___gt__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QKeySequence *sipCpp = reinterpret_cast< ::QKeySequence *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QKeySequence));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QKeySequence* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QKeySequence, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QKeySequence::operator>(*a0);
            sipReleaseType(const_cast< ::QKeySequence *>(a0),sipType_QKeySequence,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtGui, gt_slot, sipType_QKeySequence, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QKeySequence___lt__(PyObject *,PyObject *);}
static PyObject *slot_QKeySequence___lt__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QKeySequence *sipCpp = reinterpret_cast< ::QKeySequence *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QKeySequence));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QKeySequence* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QKeySequence, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QKeySequence::operator<(*a0);
            sipReleaseType(const_cast< ::QKeySequence *>(a0),sipType_QKeySequence,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtGui, lt_slot, sipType_QKeySequence, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QKeySequence___ne__(PyObject *,PyObject *);}
static PyObject *slot_QKeySequence___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QKeySequence *sipCpp = reinterpret_cast< ::QKeySequence *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QKeySequence));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QKeySequence* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QKeySequence, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QKeySequence::operator!=(*a0);
            sipReleaseType(const_cast< ::QKeySequence *>(a0),sipType_QKeySequence,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtGui, ne_slot, sipType_QKeySequence, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QKeySequence___eq__(PyObject *,PyObject *);}
static PyObject *slot_QKeySequence___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QKeySequence *sipCpp = reinterpret_cast< ::QKeySequence *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QKeySequence));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QKeySequence* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QKeySequence, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QKeySequence::operator==(*a0);
            sipReleaseType(const_cast< ::QKeySequence *>(a0),sipType_QKeySequence,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return SIP_NULLPTR;

    return sipPySlotExtend(&sipModuleAPI_QtGui, eq_slot, sipType_QKeySequence, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QKeySequence___getitem__(PyObject *,PyObject *);}
static PyObject *slot_QKeySequence___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QKeySequence *sipCpp = reinterpret_cast< ::QKeySequence *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QKeySequence));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            int sipRes = 0;
            int sipIsErr = 0;

#line 210 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qkeysequence.sip"
        Py_ssize_t idx = sipConvertFromSequenceIndex(a0, sipCpp->count());
        
        if (idx < 0)
            sipIsErr = 1;
        else
            sipRes = sipCpp->operator[]((uint)idx);
#line 627 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQKeySequence.cpp"

            if (sipIsErr)
                return 0;

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName___getitem__, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static Py_ssize_t slot_QKeySequence___len__(PyObject *);}
static Py_ssize_t slot_QKeySequence___len__(PyObject *sipSelf)
{
     ::QKeySequence *sipCpp = reinterpret_cast< ::QKeySequence *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QKeySequence));

    if (!sipCpp)
        return 0;


    {
        {
            Py_ssize_t sipRes = 0;

#line 1 "Auto-generated"
            sipRes = (Py_ssize_t)sipCpp->count();
#line 657 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQKeySequence.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QKeySequence(void *, int);}
static void release_QKeySequence(void *sipCppV, int)
{
    delete reinterpret_cast< ::QKeySequence *>(sipCppV);
}


extern "C" {static PyObject *pickle_QKeySequence(void *);}
static PyObject *pickle_QKeySequence(void *sipCppV)
{
     ::QKeySequence *sipCpp = reinterpret_cast< ::QKeySequence *>(sipCppV);
    PyObject *sipRes;

#line 91 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qkeysequence.sip"
    sipRes = Py_BuildValue((char *)"iiii", sipCpp->operator[](0), sipCpp->operator[](1), sipCpp->operator[](2), sipCpp->operator[](3));
#line 683 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQKeySequence.cpp"

    return sipRes;
}


extern "C" {static void *array_QKeySequence(Py_ssize_t);}
static void *array_QKeySequence(Py_ssize_t sipNrElem)
{
    return new  ::QKeySequence[sipNrElem];
}


extern "C" {static void assign_QKeySequence(void *, Py_ssize_t, void *);}
static void assign_QKeySequence(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QKeySequence *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QKeySequence *>(sipSrc);
}


extern "C" {static void *copy_QKeySequence(const void *, Py_ssize_t);}
static void *copy_QKeySequence(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QKeySequence(reinterpret_cast<const  ::QKeySequence *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QKeySequence(sipSimpleWrapper *);}
static void dealloc_QKeySequence(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QKeySequence(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QKeySequence(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QKeySequence(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QKeySequence *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QKeySequence();

            return sipCpp;
        }
    }

    {
        const  ::QKeySequence* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_QKeySequence, &a0, &a0State))
        {
            sipCpp = new  ::QKeySequence(*a0);
            sipReleaseType(const_cast< ::QKeySequence *>(a0),sipType_QKeySequence,a0State);

            return sipCpp;
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QKeySequence::SequenceFormat a1 = QKeySequence::NativeText;

        static const char *sipKwdList[] = {
            SIP_NULLPTR,
            sipName_format,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1|E", sipType_QString,&a0, &a0State, sipType_QKeySequence_SequenceFormat, &a1))
        {
            sipCpp = new  ::QKeySequence(*a0,a1);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipCpp;
        }
    }

    {
        int a0;
        int a1 = 0;
        int a2 = 0;
        int a3 = 0;

        static const char *sipKwdList[] = {
            SIP_NULLPTR,
            sipName_key2,
            sipName_key3,
            sipName_key4,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "i|iii", &a0, &a1, &a2, &a3))
        {
            sipCpp = new  ::QKeySequence(a0,a1,a2,a3);

            return sipCpp;
        }
    }

    {
        const  ::QVariant* a0;
        PyObject *a0Wrapper;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "@J1", &a0Wrapper, sipType_QVariant, &a0, &a0State))
        {
            sipErrorState sipError = sipErrorNone;

#line 197 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qkeysequence.sip"
        if (a0->canConvert<QKeySequence>())
            sipCpp = new QKeySequence(a0->value<QKeySequence>());
        else
            sipError = sipBadCallableArg(0, a0Wrapper);
#line 801 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQKeySequence.cpp"
            sipReleaseType(const_cast< ::QVariant *>(a0),sipType_QVariant,a0State);

            if (sipError == sipErrorNone)
                return sipCpp;

            if (sipUnused)
            {
                Py_XDECREF(*sipUnused);
            }

            sipAddException(sipError, sipParseErr);

            if (sipError == sipErrorFail)
                return SIP_NULLPTR;
        }
    }

    return SIP_NULLPTR;
}


extern "C" {static int convertTo_QKeySequence(PyObject *, void **, int *, PyObject *);}
static int convertTo_QKeySequence(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QKeySequence **sipCppPtr = reinterpret_cast< ::QKeySequence **>(sipCppPtrV);

#line 30 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qkeysequence.sip"
// Allow a StandardKey, QString or an integer whenever a QKeySequence is
// expected.

if (sipIsErr == NULL)
{
    if (sipCanConvertToType(sipPy, sipType_QKeySequence, SIP_NO_CONVERTORS))
        return 1;

    if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QKeySequence_StandardKey)))
        return 1;

    if (sipCanConvertToType(sipPy, sipType_QString, 0))
        return 1;

    PyErr_Clear();

    SIPLong_AsLong(sipPy);

    return !PyErr_Occurred();
}

if (sipCanConvertToType(sipPy, sipType_QKeySequence, SIP_NO_CONVERTORS))
{
    *sipCppPtr = reinterpret_cast<QKeySequence *>(sipConvertToType(sipPy, sipType_QKeySequence, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

    return 0;
}

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QKeySequence_StandardKey)))
{
    *sipCppPtr = new QKeySequence((QKeySequence::StandardKey)SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

if (sipCanConvertToType(sipPy, sipType_QString, 0))
{
    int state;
    QString *qs = reinterpret_cast<QString *>(sipConvertToType(sipPy, sipType_QString, 0, 0, &state, sipIsErr));

    if (*sipIsErr)
    {
        sipReleaseType(qs, sipType_QString, state);
        return 0;
    }

    *sipCppPtr = new QKeySequence(*qs);

    sipReleaseType(qs, sipType_QString, state);

    return sipGetState(sipTransferObj);
}

int key = SIPLong_AsLong(sipPy);

*sipCppPtr = new QKeySequence(key);

return sipGetState(sipTransferObj);
#line 887 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQKeySequence.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QKeySequence[] = {
    {(void *)slot_QKeySequence___hash__, hash_slot},
    {(void *)slot_QKeySequence___ge__, ge_slot},
    {(void *)slot_QKeySequence___le__, le_slot},
    {(void *)slot_QKeySequence___gt__, gt_slot},
    {(void *)slot_QKeySequence___lt__, lt_slot},
    {(void *)slot_QKeySequence___ne__, ne_slot},
    {(void *)slot_QKeySequence___eq__, eq_slot},
    {(void *)slot_QKeySequence___getitem__, getitem_slot},
    {(void *)slot_QKeySequence___len__, len_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QKeySequence[] = {
    {sipName_count, meth_QKeySequence_count, METH_VARARGS, doc_QKeySequence_count},
    {sipName_fromString, SIP_MLMETH_CAST(meth_QKeySequence_fromString), METH_VARARGS|METH_KEYWORDS, doc_QKeySequence_fromString},
    {sipName_isDetached, meth_QKeySequence_isDetached, METH_VARARGS, doc_QKeySequence_isDetached},
    {sipName_isEmpty, meth_QKeySequence_isEmpty, METH_VARARGS, doc_QKeySequence_isEmpty},
    {sipName_keyBindings, meth_QKeySequence_keyBindings, METH_VARARGS, doc_QKeySequence_keyBindings},
    {sipName_listFromString, SIP_MLMETH_CAST(meth_QKeySequence_listFromString), METH_VARARGS|METH_KEYWORDS, doc_QKeySequence_listFromString},
    {sipName_listToString, SIP_MLMETH_CAST(meth_QKeySequence_listToString), METH_VARARGS|METH_KEYWORDS, doc_QKeySequence_listToString},
    {sipName_matches, meth_QKeySequence_matches, METH_VARARGS, doc_QKeySequence_matches},
    {sipName_mnemonic, meth_QKeySequence_mnemonic, METH_VARARGS, doc_QKeySequence_mnemonic},
    {sipName_swap, meth_QKeySequence_swap, METH_VARARGS, doc_QKeySequence_swap},
    {sipName_toString, SIP_MLMETH_CAST(meth_QKeySequence_toString), METH_VARARGS|METH_KEYWORDS, doc_QKeySequence_toString}
};

static sipEnumMemberDef enummembers_QKeySequence[] = {
    {sipName_AddTab, static_cast<int>( ::QKeySequence::AddTab), 89},
    {sipName_Back, static_cast<int>( ::QKeySequence::Back), 89},
    {sipName_Backspace, static_cast<int>( ::QKeySequence::Backspace), 89},
    {sipName_Bold, static_cast<int>( ::QKeySequence::Bold), 89},
    {sipName_Cancel, static_cast<int>( ::QKeySequence::Cancel), 89},
    {sipName_Close, static_cast<int>( ::QKeySequence::Close), 89},
    {sipName_Copy, static_cast<int>( ::QKeySequence::Copy), 89},
    {sipName_Cut, static_cast<int>( ::QKeySequence::Cut), 89},
    {sipName_Delete, static_cast<int>( ::QKeySequence::Delete), 89},
    {sipName_DeleteCompleteLine, static_cast<int>( ::QKeySequence::DeleteCompleteLine), 89},
    {sipName_DeleteEndOfLine, static_cast<int>( ::QKeySequence::DeleteEndOfLine), 89},
    {sipName_DeleteEndOfWord, static_cast<int>( ::QKeySequence::DeleteEndOfWord), 89},
    {sipName_DeleteStartOfWord, static_cast<int>( ::QKeySequence::DeleteStartOfWord), 89},
    {sipName_Deselect, static_cast<int>( ::QKeySequence::Deselect), 89},
    {sipName_ExactMatch, static_cast<int>( ::QKeySequence::ExactMatch), 88},
    {sipName_Find, static_cast<int>( ::QKeySequence::Find), 89},
    {sipName_FindNext, static_cast<int>( ::QKeySequence::FindNext), 89},
    {sipName_FindPrevious, static_cast<int>( ::QKeySequence::FindPrevious), 89},
    {sipName_Forward, static_cast<int>( ::QKeySequence::Forward), 89},
    {sipName_FullScreen, static_cast<int>( ::QKeySequence::FullScreen), 89},
    {sipName_HelpContents, static_cast<int>( ::QKeySequence::HelpContents), 89},
    {sipName_InsertLineSeparator, static_cast<int>( ::QKeySequence::InsertLineSeparator), 89},
    {sipName_InsertParagraphSeparator, static_cast<int>( ::QKeySequence::InsertParagraphSeparator), 89},
    {sipName_Italic, static_cast<int>( ::QKeySequence::Italic), 89},
    {sipName_MoveToEndOfBlock, static_cast<int>( ::QKeySequence::MoveToEndOfBlock), 89},
    {sipName_MoveToEndOfDocument, static_cast<int>( ::QKeySequence::MoveToEndOfDocument), 89},
    {sipName_MoveToEndOfLine, static_cast<int>( ::QKeySequence::MoveToEndOfLine), 89},
    {sipName_MoveToNextChar, static_cast<int>( ::QKeySequence::MoveToNextChar), 89},
    {sipName_MoveToNextLine, static_cast<int>( ::QKeySequence::MoveToNextLine), 89},
    {sipName_MoveToNextPage, static_cast<int>( ::QKeySequence::MoveToNextPage), 89},
    {sipName_MoveToNextWord, static_cast<int>( ::QKeySequence::MoveToNextWord), 89},
    {sipName_MoveToPreviousChar, static_cast<int>( ::QKeySequence::MoveToPreviousChar), 89},
    {sipName_MoveToPreviousLine, static_cast<int>( ::QKeySequence::MoveToPreviousLine), 89},
    {sipName_MoveToPreviousPage, static_cast<int>( ::QKeySequence::MoveToPreviousPage), 89},
    {sipName_MoveToPreviousWord, static_cast<int>( ::QKeySequence::MoveToPreviousWord), 89},
    {sipName_MoveToStartOfBlock, static_cast<int>( ::QKeySequence::MoveToStartOfBlock), 89},
    {sipName_MoveToStartOfDocument, static_cast<int>( ::QKeySequence::MoveToStartOfDocument), 89},
    {sipName_MoveToStartOfLine, static_cast<int>( ::QKeySequence::MoveToStartOfLine), 89},
    {sipName_NativeText, static_cast<int>( ::QKeySequence::NativeText), 87},
    {sipName_New, static_cast<int>( ::QKeySequence::New), 89},
    {sipName_NextChild, static_cast<int>( ::QKeySequence::NextChild), 89},
    {sipName_NoMatch, static_cast<int>( ::QKeySequence::NoMatch), 88},
    {sipName_Open, static_cast<int>( ::QKeySequence::Open), 89},
    {sipName_PartialMatch, static_cast<int>( ::QKeySequence::PartialMatch), 88},
    {sipName_Paste, static_cast<int>( ::QKeySequence::Paste), 89},
    {sipName_PortableText, static_cast<int>( ::QKeySequence::PortableText), 87},
    {sipName_Preferences, static_cast<int>( ::QKeySequence::Preferences), 89},
    {sipName_PreviousChild, static_cast<int>( ::QKeySequence::PreviousChild), 89},
    {sipName_Print, static_cast<int>( ::QKeySequence::Print), 89},
    {sipName_Quit, static_cast<int>( ::QKeySequence::Quit), 89},
    {sipName_Redo, static_cast<int>( ::QKeySequence::Redo), 89},
    {sipName_Refresh, static_cast<int>( ::QKeySequence::Refresh), 89},
    {sipName_Replace, static_cast<int>( ::QKeySequence::Replace), 89},
    {sipName_Save, static_cast<int>( ::QKeySequence::Save), 89},
    {sipName_SaveAs, static_cast<int>( ::QKeySequence::SaveAs), 89},
    {sipName_SelectAll, static_cast<int>( ::QKeySequence::SelectAll), 89},
    {sipName_SelectEndOfBlock, static_cast<int>( ::QKeySequence::SelectEndOfBlock), 89},
    {sipName_SelectEndOfDocument, static_cast<int>( ::QKeySequence::SelectEndOfDocument), 89},
    {sipName_SelectEndOfLine, static_cast<int>( ::QKeySequence::SelectEndOfLine), 89},
    {sipName_SelectNextChar, static_cast<int>( ::QKeySequence::SelectNextChar), 89},
    {sipName_SelectNextLine, static_cast<int>( ::QKeySequence::SelectNextLine), 89},
    {sipName_SelectNextPage, static_cast<int>( ::QKeySequence::SelectNextPage), 89},
    {sipName_SelectNextWord, static_cast<int>( ::QKeySequence::SelectNextWord), 89},
    {sipName_SelectPreviousChar, static_cast<int>( ::QKeySequence::SelectPreviousChar), 89},
    {sipName_SelectPreviousLine, static_cast<int>( ::QKeySequence::SelectPreviousLine), 89},
    {sipName_SelectPreviousPage, static_cast<int>( ::QKeySequence::SelectPreviousPage), 89},
    {sipName_SelectPreviousWord, static_cast<int>( ::QKeySequence::SelectPreviousWord), 89},
    {sipName_SelectStartOfBlock, static_cast<int>( ::QKeySequence::SelectStartOfBlock), 89},
    {sipName_SelectStartOfDocument, static_cast<int>( ::QKeySequence::SelectStartOfDocument), 89},
    {sipName_SelectStartOfLine, static_cast<int>( ::QKeySequence::SelectStartOfLine), 89},
    {sipName_Underline, static_cast<int>( ::QKeySequence::Underline), 89},
    {sipName_Undo, static_cast<int>( ::QKeySequence::Undo), 89},
    {sipName_UnknownKey, static_cast<int>( ::QKeySequence::UnknownKey), 89},
    {sipName_WhatsThis, static_cast<int>( ::QKeySequence::WhatsThis), 89},
    {sipName_ZoomIn, static_cast<int>( ::QKeySequence::ZoomIn), 89},
    {sipName_ZoomOut, static_cast<int>( ::QKeySequence::ZoomOut), 89},
};

PyDoc_STRVAR(doc_QKeySequence, "\1QKeySequence()\n"
"QKeySequence(Union[QKeySequence, QKeySequence.StandardKey, str, int])\n"
"QKeySequence(str, format: QKeySequence.SequenceFormat = QKeySequence.NativeText)\n"
"QKeySequence(int, key2: int = 0, key3: int = 0, key4: int = 0)\n"
"QKeySequence(Any)");


static pyqt5ClassPluginDef plugin_QKeySequence = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtGui_QKeySequence = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QKeySequence,
        SIP_NULLPTR,
        &plugin_QKeySequence
    },
    {
        sipNameNr_QKeySequence,
        {0, 0, 1},
        11, methods_QKeySequence,
        76, enummembers_QKeySequence,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QKeySequence,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    slots_QKeySequence,
    init_type_QKeySequence,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QKeySequence,
    assign_QKeySequence,
    array_QKeySequence,
    copy_QKeySequence,
    release_QKeySequence,
    SIP_NULLPTR,
    convertTo_QKeySequence,
    SIP_NULLPTR,
    SIP_NULLPTR,
    pickle_QKeySequence,
    SIP_NULLPTR,
    SIP_NULLPTR
};
