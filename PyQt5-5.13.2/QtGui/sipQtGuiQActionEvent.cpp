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

#line 666 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQActionEvent.cpp"

#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQActionEvent.cpp"


class sipQActionEvent : public  ::QActionEvent
{
public:
    sipQActionEvent(int, ::QAction*, ::QAction*);
    sipQActionEvent(const  ::QActionEvent&);
    ~sipQActionEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQActionEvent(const sipQActionEvent &);
    sipQActionEvent &operator = (const sipQActionEvent &);
};

sipQActionEvent::sipQActionEvent(int a0, ::QAction*a1, ::QAction*a2):  ::QActionEvent(a0,a1,a2), sipPySelf(SIP_NULLPTR)
{
}

sipQActionEvent::sipQActionEvent(const  ::QActionEvent& a0):  ::QActionEvent(a0), sipPySelf(SIP_NULLPTR)
{
}

sipQActionEvent::~sipQActionEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


PyDoc_STRVAR(doc_QActionEvent_action, "action(self) -> QAction");

extern "C" {static PyObject *meth_QActionEvent_action(PyObject *, PyObject *);}
static PyObject *meth_QActionEvent_action(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QActionEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QActionEvent, &sipCpp))
        {
             ::QAction*sipRes;

            sipRes = sipCpp->action();

            return sipConvertFromType(sipRes,sipType_QAction,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QActionEvent, sipName_action, doc_QActionEvent_action);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QActionEvent_before, "before(self) -> QAction");

extern "C" {static PyObject *meth_QActionEvent_before(PyObject *, PyObject *);}
static PyObject *meth_QActionEvent_before(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QActionEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QActionEvent, &sipCpp))
        {
             ::QAction*sipRes;

            sipRes = sipCpp->before();

            return sipConvertFromType(sipRes,sipType_QAction,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QActionEvent, sipName_before, doc_QActionEvent_before);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QActionEvent(void *, const sipTypeDef *);}
static void *cast_QActionEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::QActionEvent *sipCpp = reinterpret_cast< ::QActionEvent *>(sipCppV);

    if (targetType == sipType_QEvent)
        return static_cast< ::QEvent *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QActionEvent(void *, int);}
static void release_QActionEvent(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQActionEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::QActionEvent *>(sipCppV);
}


extern "C" {static void assign_QActionEvent(void *, Py_ssize_t, void *);}
static void assign_QActionEvent(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QActionEvent *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QActionEvent *>(sipSrc);
}


extern "C" {static void *copy_QActionEvent(const void *, Py_ssize_t);}
static void *copy_QActionEvent(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QActionEvent(reinterpret_cast<const  ::QActionEvent *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QActionEvent(sipSimpleWrapper *);}
static void dealloc_QActionEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQActionEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QActionEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QActionEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QActionEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQActionEvent *sipCpp = SIP_NULLPTR;

    {
        int a0;
         ::QAction* a1;
         ::QAction* a2 = 0;

        static const char *sipKwdList[] = {
            SIP_NULLPTR,
            SIP_NULLPTR,
            sipName_before,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "iJ8|J8", &a0, sipType_QAction, &a1, sipType_QAction, &a2))
        {
            sipCpp = new sipQActionEvent(a0,a1,a2);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QActionEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QActionEvent, &a0))
        {
            sipCpp = new sipQActionEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QActionEvent[] = {{6, 0, 1}};


static PyMethodDef methods_QActionEvent[] = {
    {sipName_action, meth_QActionEvent_action, METH_VARARGS, doc_QActionEvent_action},
    {sipName_before, meth_QActionEvent_before, METH_VARARGS, doc_QActionEvent_before}
};

PyDoc_STRVAR(doc_QActionEvent, "\1QActionEvent(int, QAction, before: QAction = None)\n"
"QActionEvent(QActionEvent)");


static pyqt5ClassPluginDef plugin_QActionEvent = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtGui_QActionEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QActionEvent,
        SIP_NULLPTR,
        &plugin_QActionEvent
    },
    {
        sipNameNr_QActionEvent,
        {0, 0, 1},
        2, methods_QActionEvent,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QActionEvent,
    -1,
    -1,
    supers_QActionEvent,
    SIP_NULLPTR,
    init_type_QActionEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QActionEvent,
    assign_QActionEvent,
    SIP_NULLPTR,
    copy_QActionEvent,
    release_QActionEvent,
    cast_QActionEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};