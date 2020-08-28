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

#line 692 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQShortcutEvent.cpp"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qkeysequence.sip"
#include <qkeysequence.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQShortcutEvent.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQShortcutEvent.cpp"


class sipQShortcutEvent : public  ::QShortcutEvent
{
public:
    sipQShortcutEvent(const  ::QKeySequence&,int,bool);
    sipQShortcutEvent(const  ::QShortcutEvent&);
    ~sipQShortcutEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQShortcutEvent(const sipQShortcutEvent &);
    sipQShortcutEvent &operator = (const sipQShortcutEvent &);
};

sipQShortcutEvent::sipQShortcutEvent(const  ::QKeySequence& a0,int a1,bool a2):  ::QShortcutEvent(a0,a1,a2), sipPySelf(SIP_NULLPTR)
{
}

sipQShortcutEvent::sipQShortcutEvent(const  ::QShortcutEvent& a0):  ::QShortcutEvent(a0), sipPySelf(SIP_NULLPTR)
{
}

sipQShortcutEvent::~sipQShortcutEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


PyDoc_STRVAR(doc_QShortcutEvent_isAmbiguous, "isAmbiguous(self) -> bool");

extern "C" {static PyObject *meth_QShortcutEvent_isAmbiguous(PyObject *, PyObject *);}
static PyObject *meth_QShortcutEvent_isAmbiguous(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QShortcutEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QShortcutEvent, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isAmbiguous();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QShortcutEvent, sipName_isAmbiguous, doc_QShortcutEvent_isAmbiguous);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QShortcutEvent_key, "key(self) -> QKeySequence");

extern "C" {static PyObject *meth_QShortcutEvent_key(PyObject *, PyObject *);}
static PyObject *meth_QShortcutEvent_key(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QShortcutEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QShortcutEvent, &sipCpp))
        {
             ::QKeySequence*sipRes;

            sipRes = new  ::QKeySequence(sipCpp->key());

            return sipConvertFromNewType(sipRes,sipType_QKeySequence,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QShortcutEvent, sipName_key, doc_QShortcutEvent_key);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QShortcutEvent_shortcutId, "shortcutId(self) -> int");

extern "C" {static PyObject *meth_QShortcutEvent_shortcutId(PyObject *, PyObject *);}
static PyObject *meth_QShortcutEvent_shortcutId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QShortcutEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QShortcutEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->shortcutId();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QShortcutEvent, sipName_shortcutId, doc_QShortcutEvent_shortcutId);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QShortcutEvent(void *, const sipTypeDef *);}
static void *cast_QShortcutEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::QShortcutEvent *sipCpp = reinterpret_cast< ::QShortcutEvent *>(sipCppV);

    if (targetType == sipType_QEvent)
        return static_cast< ::QEvent *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QShortcutEvent(void *, int);}
static void release_QShortcutEvent(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQShortcutEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::QShortcutEvent *>(sipCppV);
}


extern "C" {static void assign_QShortcutEvent(void *, Py_ssize_t, void *);}
static void assign_QShortcutEvent(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QShortcutEvent *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QShortcutEvent *>(sipSrc);
}


extern "C" {static void *copy_QShortcutEvent(const void *, Py_ssize_t);}
static void *copy_QShortcutEvent(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QShortcutEvent(reinterpret_cast<const  ::QShortcutEvent *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QShortcutEvent(sipSimpleWrapper *);}
static void dealloc_QShortcutEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQShortcutEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QShortcutEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QShortcutEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QShortcutEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQShortcutEvent *sipCpp = SIP_NULLPTR;

    {
        const  ::QKeySequence* a0;
        int a0State = 0;
        int a1;
        bool a2 = 0;

        static const char *sipKwdList[] = {
            SIP_NULLPTR,
            SIP_NULLPTR,
            sipName_ambiguous,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1i|b", sipType_QKeySequence, &a0, &a0State, &a1, &a2))
        {
            sipCpp = new sipQShortcutEvent(*a0,a1,a2);
            sipReleaseType(const_cast< ::QKeySequence *>(a0),sipType_QKeySequence,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QShortcutEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QShortcutEvent, &a0))
        {
            sipCpp = new sipQShortcutEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QShortcutEvent[] = {{6, 0, 1}};


static PyMethodDef methods_QShortcutEvent[] = {
    {sipName_isAmbiguous, meth_QShortcutEvent_isAmbiguous, METH_VARARGS, doc_QShortcutEvent_isAmbiguous},
    {sipName_key, meth_QShortcutEvent_key, METH_VARARGS, doc_QShortcutEvent_key},
    {sipName_shortcutId, meth_QShortcutEvent_shortcutId, METH_VARARGS, doc_QShortcutEvent_shortcutId}
};

PyDoc_STRVAR(doc_QShortcutEvent, "\1QShortcutEvent(Union[QKeySequence, QKeySequence.StandardKey, str, int], int, ambiguous: bool = False)\n"
"QShortcutEvent(QShortcutEvent)");


static pyqt5ClassPluginDef plugin_QShortcutEvent = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtGui_QShortcutEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QShortcutEvent,
        SIP_NULLPTR,
        &plugin_QShortcutEvent
    },
    {
        sipNameNr_QShortcutEvent,
        {0, 0, 1},
        3, methods_QShortcutEvent,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QShortcutEvent,
    -1,
    -1,
    supers_QShortcutEvent,
    SIP_NULLPTR,
    init_type_QShortcutEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QShortcutEvent,
    assign_QShortcutEvent,
    SIP_NULLPTR,
    copy_QShortcutEvent,
    release_QShortcutEvent,
    cast_QShortcutEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
