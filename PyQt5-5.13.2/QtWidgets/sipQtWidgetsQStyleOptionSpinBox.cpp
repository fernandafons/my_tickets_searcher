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

#include "sipAPIQtWidgets.h"

#line 749 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionSpinBox.cpp"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qabstractspinbox.sip"
#include <qabstractspinbox.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionSpinBox.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qabstractspinbox.sip"
#include <qabstractspinbox.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionSpinBox.cpp"
#line 28 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionSpinBox.cpp"


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QStyleOptionSpinBox(void *, const sipTypeDef *);}
static void *cast_QStyleOptionSpinBox(void *sipCppV, const sipTypeDef *targetType)
{
     ::QStyleOptionSpinBox *sipCpp = reinterpret_cast< ::QStyleOptionSpinBox *>(sipCppV);

    if (targetType == sipType_QStyleOptionComplex)
        return static_cast< ::QStyleOptionComplex *>(sipCpp);

    if (targetType == sipType_QStyleOption)
        return static_cast< ::QStyleOption *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionSpinBox(void *, int);}
static void release_QStyleOptionSpinBox(void *sipCppV, int)
{
    delete reinterpret_cast< ::QStyleOptionSpinBox *>(sipCppV);
}


extern "C" {static void *array_QStyleOptionSpinBox(Py_ssize_t);}
static void *array_QStyleOptionSpinBox(Py_ssize_t sipNrElem)
{
    return new  ::QStyleOptionSpinBox[sipNrElem];
}


extern "C" {static void assign_QStyleOptionSpinBox(void *, Py_ssize_t, void *);}
static void assign_QStyleOptionSpinBox(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QStyleOptionSpinBox *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QStyleOptionSpinBox *>(sipSrc);
}


extern "C" {static void *copy_QStyleOptionSpinBox(const void *, Py_ssize_t);}
static void *copy_QStyleOptionSpinBox(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QStyleOptionSpinBox(reinterpret_cast<const  ::QStyleOptionSpinBox *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionSpinBox(sipSimpleWrapper *);}
static void dealloc_QStyleOptionSpinBox(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QStyleOptionSpinBox(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QStyleOptionSpinBox(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionSpinBox(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QStyleOptionSpinBox *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QStyleOptionSpinBox();

            return sipCpp;
        }
    }

    {
        const  ::QStyleOptionSpinBox* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QStyleOptionSpinBox, &a0))
        {
            sipCpp = new  ::QStyleOptionSpinBox(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionSpinBox[] = {{324, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionSpinBox[] = {
    {sipName_Type, static_cast<int>( ::QStyleOptionSpinBox::Type), 368},
    {sipName_Version, static_cast<int>( ::QStyleOptionSpinBox::Version), 369},
};


extern "C" {static PyObject *varget_QStyleOptionSpinBox_buttonSymbols(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionSpinBox_buttonSymbols(void *sipSelf, PyObject *, PyObject *)
{
     ::QAbstractSpinBox::ButtonSymbols sipVal;
     ::QStyleOptionSpinBox *sipCpp = reinterpret_cast< ::QStyleOptionSpinBox *>(sipSelf);

    sipVal = sipCpp->buttonSymbols;

    return sipConvertFromEnum(static_cast<int>(sipVal), sipType_QAbstractSpinBox_ButtonSymbols);
}


extern "C" {static int varset_QStyleOptionSpinBox_buttonSymbols(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionSpinBox_buttonSymbols(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QAbstractSpinBox::ButtonSymbols sipVal;
     ::QStyleOptionSpinBox *sipCpp = reinterpret_cast< ::QStyleOptionSpinBox *>(sipSelf);

    sipVal = ( ::QAbstractSpinBox::ButtonSymbols)sipConvertToEnum(sipPy, sipType_QAbstractSpinBox_ButtonSymbols);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->buttonSymbols = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionSpinBox_frame(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionSpinBox_frame(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
     ::QStyleOptionSpinBox *sipCpp = reinterpret_cast< ::QStyleOptionSpinBox *>(sipSelf);

    sipVal = sipCpp->frame;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionSpinBox_frame(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionSpinBox_frame(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::QStyleOptionSpinBox *sipCpp = reinterpret_cast< ::QStyleOptionSpinBox *>(sipSelf);

    sipVal = sipConvertToBool(sipPy);

    if (sipVal < 0)
        return -1;

    sipCpp->frame = static_cast<bool>(sipVal);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionSpinBox_stepEnabled(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionSpinBox_stepEnabled(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::QAbstractSpinBox::StepEnabled*sipVal;
     ::QStyleOptionSpinBox *sipCpp = reinterpret_cast< ::QStyleOptionSpinBox *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -82);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->stepEnabled;

    sipPy = sipConvertFromType(sipVal, sipType_QAbstractSpinBox_StepEnabled, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -81, sipPySelf);
        sipKeepReference(sipPySelf, -82, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_QStyleOptionSpinBox_stepEnabled(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionSpinBox_stepEnabled(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QAbstractSpinBox::StepEnabled*sipVal;
     ::QStyleOptionSpinBox *sipCpp = reinterpret_cast< ::QStyleOptionSpinBox *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QAbstractSpinBox::StepEnabled *>(sipForceConvertToType(sipPy, sipType_QAbstractSpinBox_StepEnabled, SIP_NULLPTR, SIP_NOT_NONE, &sipValState, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->stepEnabled = *sipVal;

    sipReleaseType(sipVal, sipType_QAbstractSpinBox_StepEnabled, sipValState);

    return 0;
}

sipVariableDef variables_QStyleOptionSpinBox[] = {
    {InstanceVariable, sipName_buttonSymbols, (PyMethodDef *)varget_QStyleOptionSpinBox_buttonSymbols, (PyMethodDef *)varset_QStyleOptionSpinBox_buttonSymbols, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_frame, (PyMethodDef *)varget_QStyleOptionSpinBox_frame, (PyMethodDef *)varset_QStyleOptionSpinBox_frame, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_stepEnabled, (PyMethodDef *)varget_QStyleOptionSpinBox_stepEnabled, (PyMethodDef *)varset_QStyleOptionSpinBox_stepEnabled, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_QStyleOptionSpinBox, "\1QStyleOptionSpinBox()\n"
"QStyleOptionSpinBox(QStyleOptionSpinBox)");


static pyqt5ClassPluginDef plugin_QStyleOptionSpinBox = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtWidgets_QStyleOptionSpinBox = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionSpinBox,
        SIP_NULLPTR,
        &plugin_QStyleOptionSpinBox
    },
    {
        sipNameNr_QStyleOptionSpinBox,
        {0, 0, 1},
        0, SIP_NULLPTR,
        2, enummembers_QStyleOptionSpinBox,
        3, variables_QStyleOptionSpinBox,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QStyleOptionSpinBox,
    -1,
    -1,
    supers_QStyleOptionSpinBox,
    SIP_NULLPTR,
    init_type_QStyleOptionSpinBox,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QStyleOptionSpinBox,
    assign_QStyleOptionSpinBox,
    array_QStyleOptionSpinBox,
    copy_QStyleOptionSpinBox,
    release_QStyleOptionSpinBox,
    cast_QStyleOptionSpinBox,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
