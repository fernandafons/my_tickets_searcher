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

#line 235 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTimerEvent.cpp"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQTimerEvent.cpp"


class sipQTimerEvent : public  ::QTimerEvent
{
public:
    sipQTimerEvent(int);
    sipQTimerEvent(const  ::QTimerEvent&);
    ~sipQTimerEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQTimerEvent(const sipQTimerEvent &);
    sipQTimerEvent &operator = (const sipQTimerEvent &);
};

sipQTimerEvent::sipQTimerEvent(int a0):  ::QTimerEvent(a0), sipPySelf(SIP_NULLPTR)
{
}

sipQTimerEvent::sipQTimerEvent(const  ::QTimerEvent& a0):  ::QTimerEvent(a0), sipPySelf(SIP_NULLPTR)
{
}

sipQTimerEvent::~sipQTimerEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


PyDoc_STRVAR(doc_QTimerEvent_timerId, "timerId(self) -> int");

extern "C" {static PyObject *meth_QTimerEvent_timerId(PyObject *, PyObject *);}
static PyObject *meth_QTimerEvent_timerId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QTimerEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTimerEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->timerId();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTimerEvent, sipName_timerId, doc_QTimerEvent_timerId);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QTimerEvent(void *, const sipTypeDef *);}
static void *cast_QTimerEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::QTimerEvent *sipCpp = reinterpret_cast< ::QTimerEvent *>(sipCppV);

    if (targetType == sipType_QEvent)
        return static_cast< ::QEvent *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTimerEvent(void *, int);}
static void release_QTimerEvent(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQTimerEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::QTimerEvent *>(sipCppV);
}


extern "C" {static void assign_QTimerEvent(void *, Py_ssize_t, void *);}
static void assign_QTimerEvent(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QTimerEvent *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QTimerEvent *>(sipSrc);
}


extern "C" {static void *copy_QTimerEvent(const void *, Py_ssize_t);}
static void *copy_QTimerEvent(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QTimerEvent(reinterpret_cast<const  ::QTimerEvent *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTimerEvent(sipSimpleWrapper *);}
static void dealloc_QTimerEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQTimerEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QTimerEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QTimerEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTimerEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQTimerEvent *sipCpp = SIP_NULLPTR;

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "i", &a0))
        {
            sipCpp = new sipQTimerEvent(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QTimerEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QTimerEvent, &a0))
        {
            sipCpp = new sipQTimerEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QTimerEvent[] = {{69, 255, 1}};


static PyMethodDef methods_QTimerEvent[] = {
    {sipName_timerId, meth_QTimerEvent_timerId, METH_VARARGS, doc_QTimerEvent_timerId}
};

PyDoc_STRVAR(doc_QTimerEvent, "\1QTimerEvent(int)\n"
"QTimerEvent(QTimerEvent)");


static pyqt5ClassPluginDef plugin_QTimerEvent = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QTimerEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QTimerEvent,
        SIP_NULLPTR,
        &plugin_QTimerEvent
    },
    {
        sipNameNr_QTimerEvent,
        {0, 0, 1},
        1, methods_QTimerEvent,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QTimerEvent,
    -1,
    -1,
    supers_QTimerEvent,
    SIP_NULLPTR,
    init_type_QTimerEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QTimerEvent,
    assign_QTimerEvent,
    SIP_NULLPTR,
    copy_QTimerEvent,
    release_QTimerEvent,
    cast_QTimerEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
