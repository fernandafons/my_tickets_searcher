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

#line 375 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQFocusEvent.cpp"

#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQFocusEvent.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQFocusEvent.cpp"


class sipQFocusEvent : public  ::QFocusEvent
{
public:
    sipQFocusEvent( ::QEvent::Type, ::Qt::FocusReason);
    sipQFocusEvent(const  ::QFocusEvent&);
    ~sipQFocusEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQFocusEvent(const sipQFocusEvent &);
    sipQFocusEvent &operator = (const sipQFocusEvent &);
};

sipQFocusEvent::sipQFocusEvent( ::QEvent::Type a0, ::Qt::FocusReason a1):  ::QFocusEvent(a0,a1), sipPySelf(SIP_NULLPTR)
{
}

sipQFocusEvent::sipQFocusEvent(const  ::QFocusEvent& a0):  ::QFocusEvent(a0), sipPySelf(SIP_NULLPTR)
{
}

sipQFocusEvent::~sipQFocusEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


PyDoc_STRVAR(doc_QFocusEvent_gotFocus, "gotFocus(self) -> bool");

extern "C" {static PyObject *meth_QFocusEvent_gotFocus(PyObject *, PyObject *);}
static PyObject *meth_QFocusEvent_gotFocus(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QFocusEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFocusEvent, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->gotFocus();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QFocusEvent, sipName_gotFocus, doc_QFocusEvent_gotFocus);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QFocusEvent_lostFocus, "lostFocus(self) -> bool");

extern "C" {static PyObject *meth_QFocusEvent_lostFocus(PyObject *, PyObject *);}
static PyObject *meth_QFocusEvent_lostFocus(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QFocusEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFocusEvent, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->lostFocus();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QFocusEvent, sipName_lostFocus, doc_QFocusEvent_lostFocus);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QFocusEvent_reason, "reason(self) -> Qt.FocusReason");

extern "C" {static PyObject *meth_QFocusEvent_reason(PyObject *, PyObject *);}
static PyObject *meth_QFocusEvent_reason(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QFocusEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFocusEvent, &sipCpp))
        {
             ::Qt::FocusReason sipRes;

            sipRes = sipCpp->reason();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_Qt_FocusReason);
        }
    }

    sipNoMethod(sipParseErr, sipName_QFocusEvent, sipName_reason, doc_QFocusEvent_reason);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QFocusEvent(void *, const sipTypeDef *);}
static void *cast_QFocusEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::QFocusEvent *sipCpp = reinterpret_cast< ::QFocusEvent *>(sipCppV);

    if (targetType == sipType_QEvent)
        return static_cast< ::QEvent *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QFocusEvent(void *, int);}
static void release_QFocusEvent(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQFocusEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::QFocusEvent *>(sipCppV);
}


extern "C" {static void assign_QFocusEvent(void *, Py_ssize_t, void *);}
static void assign_QFocusEvent(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QFocusEvent *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QFocusEvent *>(sipSrc);
}


extern "C" {static void *copy_QFocusEvent(const void *, Py_ssize_t);}
static void *copy_QFocusEvent(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QFocusEvent(reinterpret_cast<const  ::QFocusEvent *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QFocusEvent(sipSimpleWrapper *);}
static void dealloc_QFocusEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQFocusEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QFocusEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QFocusEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QFocusEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQFocusEvent *sipCpp = SIP_NULLPTR;

    {
         ::QEvent::Type a0;
         ::Qt::FocusReason a1 = Qt::OtherFocusReason;

        static const char *sipKwdList[] = {
            SIP_NULLPTR,
            sipName_reason,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "E|E", sipType_QEvent_Type, &a0, sipType_Qt_FocusReason, &a1))
        {
            sipCpp = new sipQFocusEvent(a0,a1);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QFocusEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QFocusEvent, &a0))
        {
            sipCpp = new sipQFocusEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QFocusEvent[] = {{6, 0, 1}};


static PyMethodDef methods_QFocusEvent[] = {
    {sipName_gotFocus, meth_QFocusEvent_gotFocus, METH_VARARGS, doc_QFocusEvent_gotFocus},
    {sipName_lostFocus, meth_QFocusEvent_lostFocus, METH_VARARGS, doc_QFocusEvent_lostFocus},
    {sipName_reason, meth_QFocusEvent_reason, METH_VARARGS, doc_QFocusEvent_reason}
};

PyDoc_STRVAR(doc_QFocusEvent, "\1QFocusEvent(QEvent.Type, reason: Qt.FocusReason = Qt.OtherFocusReason)\n"
"QFocusEvent(QFocusEvent)");


static pyqt5ClassPluginDef plugin_QFocusEvent = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtGui_QFocusEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QFocusEvent,
        SIP_NULLPTR,
        &plugin_QFocusEvent
    },
    {
        sipNameNr_QFocusEvent,
        {0, 0, 1},
        3, methods_QFocusEvent,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QFocusEvent,
    -1,
    -1,
    supers_QFocusEvent,
    SIP_NULLPTR,
    init_type_QFocusEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QFocusEvent,
    assign_QFocusEvent,
    SIP_NULLPTR,
    copy_QFocusEvent,
    release_QFocusEvent,
    cast_QFocusEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
