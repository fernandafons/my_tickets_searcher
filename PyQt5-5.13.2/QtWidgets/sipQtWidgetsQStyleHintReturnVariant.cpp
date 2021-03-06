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

#line 1035 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleHintReturnVariant.cpp"

#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleHintReturnVariant.cpp"


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QStyleHintReturnVariant(void *, const sipTypeDef *);}
static void *cast_QStyleHintReturnVariant(void *sipCppV, const sipTypeDef *targetType)
{
     ::QStyleHintReturnVariant *sipCpp = reinterpret_cast< ::QStyleHintReturnVariant *>(sipCppV);

    if (targetType == sipType_QStyleHintReturn)
        return static_cast< ::QStyleHintReturn *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleHintReturnVariant(void *, int);}
static void release_QStyleHintReturnVariant(void *sipCppV, int)
{
    delete reinterpret_cast< ::QStyleHintReturnVariant *>(sipCppV);
}


extern "C" {static void *array_QStyleHintReturnVariant(Py_ssize_t);}
static void *array_QStyleHintReturnVariant(Py_ssize_t sipNrElem)
{
    return new  ::QStyleHintReturnVariant[sipNrElem];
}


extern "C" {static void assign_QStyleHintReturnVariant(void *, Py_ssize_t, void *);}
static void assign_QStyleHintReturnVariant(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QStyleHintReturnVariant *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QStyleHintReturnVariant *>(sipSrc);
}


extern "C" {static void *copy_QStyleHintReturnVariant(const void *, Py_ssize_t);}
static void *copy_QStyleHintReturnVariant(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QStyleHintReturnVariant(reinterpret_cast<const  ::QStyleHintReturnVariant *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleHintReturnVariant(sipSimpleWrapper *);}
static void dealloc_QStyleHintReturnVariant(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QStyleHintReturnVariant(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QStyleHintReturnVariant(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleHintReturnVariant(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QStyleHintReturnVariant *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QStyleHintReturnVariant();

            return sipCpp;
        }
    }

    {
        const  ::QStyleHintReturnVariant* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QStyleHintReturnVariant, &a0))
        {
            sipCpp = new  ::QStyleHintReturnVariant(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleHintReturnVariant[] = {{302, 255, 1}};

static sipEnumMemberDef enummembers_QStyleHintReturnVariant[] = {
    {sipName_Type, static_cast<int>( ::QStyleHintReturnVariant::Type), 310},
    {sipName_Version, static_cast<int>( ::QStyleHintReturnVariant::Version), 311},
};


extern "C" {static PyObject *varget_QStyleHintReturnVariant_variant(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleHintReturnVariant_variant(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::QVariant*sipVal;
     ::QStyleHintReturnVariant *sipCpp = reinterpret_cast< ::QStyleHintReturnVariant *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -61);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->variant;

    sipPy = sipConvertFromType(sipVal, sipType_QVariant, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -13, sipPySelf);
        sipKeepReference(sipPySelf, -61, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_QStyleHintReturnVariant_variant(void *, PyObject *, PyObject *);}
static int varset_QStyleHintReturnVariant_variant(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QVariant*sipVal;
     ::QStyleHintReturnVariant *sipCpp = reinterpret_cast< ::QStyleHintReturnVariant *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QVariant *>(sipForceConvertToType(sipPy, sipType_QVariant, SIP_NULLPTR, SIP_NOT_NONE, &sipValState, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->variant = *sipVal;

    sipReleaseType(sipVal, sipType_QVariant, sipValState);

    return 0;
}

sipVariableDef variables_QStyleHintReturnVariant[] = {
    {InstanceVariable, sipName_variant, (PyMethodDef *)varget_QStyleHintReturnVariant_variant, (PyMethodDef *)varset_QStyleHintReturnVariant_variant, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_QStyleHintReturnVariant, "\1QStyleHintReturnVariant()\n"
"QStyleHintReturnVariant(QStyleHintReturnVariant)");


static pyqt5ClassPluginDef plugin_QStyleHintReturnVariant = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtWidgets_QStyleHintReturnVariant = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QStyleHintReturnVariant,
        SIP_NULLPTR,
        &plugin_QStyleHintReturnVariant
    },
    {
        sipNameNr_QStyleHintReturnVariant,
        {0, 0, 1},
        0, SIP_NULLPTR,
        2, enummembers_QStyleHintReturnVariant,
        1, variables_QStyleHintReturnVariant,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QStyleHintReturnVariant,
    -1,
    -1,
    supers_QStyleHintReturnVariant,
    SIP_NULLPTR,
    init_type_QStyleHintReturnVariant,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QStyleHintReturnVariant,
    assign_QStyleHintReturnVariant,
    array_QStyleHintReturnVariant,
    copy_QStyleHintReturnVariant,
    release_QStyleHintReturnVariant,
    cast_QStyleHintReturnVariant,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
