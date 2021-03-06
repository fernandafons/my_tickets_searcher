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

#line 650 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQWhatsThisClickedEvent.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQWhatsThisClickedEvent.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQWhatsThisClickedEvent.cpp"


class sipQWhatsThisClickedEvent : public  ::QWhatsThisClickedEvent
{
public:
    sipQWhatsThisClickedEvent(const  ::QString&);
    sipQWhatsThisClickedEvent(const  ::QWhatsThisClickedEvent&);
    ~sipQWhatsThisClickedEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQWhatsThisClickedEvent(const sipQWhatsThisClickedEvent &);
    sipQWhatsThisClickedEvent &operator = (const sipQWhatsThisClickedEvent &);
};

sipQWhatsThisClickedEvent::sipQWhatsThisClickedEvent(const  ::QString& a0):  ::QWhatsThisClickedEvent(a0), sipPySelf(SIP_NULLPTR)
{
}

sipQWhatsThisClickedEvent::sipQWhatsThisClickedEvent(const  ::QWhatsThisClickedEvent& a0):  ::QWhatsThisClickedEvent(a0), sipPySelf(SIP_NULLPTR)
{
}

sipQWhatsThisClickedEvent::~sipQWhatsThisClickedEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


PyDoc_STRVAR(doc_QWhatsThisClickedEvent_href, "href(self) -> str");

extern "C" {static PyObject *meth_QWhatsThisClickedEvent_href(PyObject *, PyObject *);}
static PyObject *meth_QWhatsThisClickedEvent_href(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QWhatsThisClickedEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWhatsThisClickedEvent, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->href());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QWhatsThisClickedEvent, sipName_href, doc_QWhatsThisClickedEvent_href);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QWhatsThisClickedEvent(void *, const sipTypeDef *);}
static void *cast_QWhatsThisClickedEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::QWhatsThisClickedEvent *sipCpp = reinterpret_cast< ::QWhatsThisClickedEvent *>(sipCppV);

    if (targetType == sipType_QEvent)
        return static_cast< ::QEvent *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWhatsThisClickedEvent(void *, int);}
static void release_QWhatsThisClickedEvent(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQWhatsThisClickedEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::QWhatsThisClickedEvent *>(sipCppV);
}


extern "C" {static void assign_QWhatsThisClickedEvent(void *, Py_ssize_t, void *);}
static void assign_QWhatsThisClickedEvent(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QWhatsThisClickedEvent *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QWhatsThisClickedEvent *>(sipSrc);
}


extern "C" {static void *copy_QWhatsThisClickedEvent(const void *, Py_ssize_t);}
static void *copy_QWhatsThisClickedEvent(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QWhatsThisClickedEvent(reinterpret_cast<const  ::QWhatsThisClickedEvent *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QWhatsThisClickedEvent(sipSimpleWrapper *);}
static void dealloc_QWhatsThisClickedEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQWhatsThisClickedEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QWhatsThisClickedEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QWhatsThisClickedEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWhatsThisClickedEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQWhatsThisClickedEvent *sipCpp = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1", sipType_QString,&a0, &a0State))
        {
            sipCpp = new sipQWhatsThisClickedEvent(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QWhatsThisClickedEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QWhatsThisClickedEvent, &a0))
        {
            sipCpp = new sipQWhatsThisClickedEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QWhatsThisClickedEvent[] = {{6, 0, 1}};


static PyMethodDef methods_QWhatsThisClickedEvent[] = {
    {sipName_href, meth_QWhatsThisClickedEvent_href, METH_VARARGS, doc_QWhatsThisClickedEvent_href}
};

PyDoc_STRVAR(doc_QWhatsThisClickedEvent, "\1QWhatsThisClickedEvent(str)\n"
"QWhatsThisClickedEvent(QWhatsThisClickedEvent)");


static pyqt5ClassPluginDef plugin_QWhatsThisClickedEvent = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtGui_QWhatsThisClickedEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QWhatsThisClickedEvent,
        SIP_NULLPTR,
        &plugin_QWhatsThisClickedEvent
    },
    {
        sipNameNr_QWhatsThisClickedEvent,
        {0, 0, 1},
        1, methods_QWhatsThisClickedEvent,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QWhatsThisClickedEvent,
    -1,
    -1,
    supers_QWhatsThisClickedEvent,
    SIP_NULLPTR,
    init_type_QWhatsThisClickedEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QWhatsThisClickedEvent,
    assign_QWhatsThisClickedEvent,
    SIP_NULLPTR,
    copy_QWhatsThisClickedEvent,
    release_QWhatsThisClickedEvent,
    cast_QWhatsThisClickedEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
