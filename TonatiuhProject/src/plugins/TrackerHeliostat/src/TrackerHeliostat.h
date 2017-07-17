/***************************************************************************
Copyright (C) 2008 by the Tonatiuh Software Development Team.

This file is part of Tonatiuh.

Tonatiuh program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.


Acknowledgments:

The development of Tonatiuh was started on 2004 by Dr. Manuel J. Blanco,
then Chair of the Department of Engineering of the University of Texas at
Brownsville. From May 2004 to July 2008, it was supported by the Department
of Energy (DOE) and the National Renewable Energy Laboratory (NREL) under
the Minority Research Associate (MURA) Program Subcontract ACQ-4-33623-06.
During 2007, NREL also contributed to the validation of Tonatiuh under the
framework of the Memorandum of Understanding signed with the Spanish
National Renewable Energy Centre (CENER) on February, 20, 2007 (MOU#NREL-07-117).
Since June 2006, the development of Tonatiuh is being led by the CENER, under the
direction of Dr. Blanco, now Director of CENER Solar Thermal Energy Department.

Developers: Manuel J. Blanco (mblanco@cener.com), Amaia Mutuberria, Victor Martin.

Contributors: Javier Garcia-Barberena, I�aki Perez, Inigo Pagola,  Gilda Jimenez,
Juana Amieva, Azael Mancillas, Cesar Cantu.
***************************************************************************/

#ifndef TRACKERHELIOSTAT_H_
#define TRACKERHELIOSTAT_H_

#include "TNodeType.h"
#include "TTrackerNode.h"

//!  TrackerHeliostat is the class for solar one-axis trackers.

/*!
  TrackerHeliostat class provides a structure to one axis tracker node.
  This node is a group node which geometric to rotation around the user defined axis is applied so the plane perpendicular to the defined axis contains the sun vector.
  Parameters:
   - aimingPoint: heliostat focus point.
   - typeOfAimingPoint:
	m_parametersList->Append( QLatin1String( "typeOfRotation" : rotation axis. Default: x
*/

class TrackerHeliostat : public TTrackerNode
{
	Q_OBJECT

public:
	static void* CreateInstance();
	static void Init();

	TrackerHeliostat();

	Transform GetTrasformation() const;
	TNodeType GetType() const;
	void UpdateTrackerTransform( Vector3D sunVector, Transform parentWT0 );


protected:
	~TrackerHeliostat();

private:
	static TNodeType m_nodeType;
	QString m_aimingPointLabel;
	QString m_aimingPointTypeLabel;
	QString m_absoluteAimingLabel;
	QString m_relativeAimingLabel;
	QString m_rotationTypeLabel;
	QString m_yxRotationLabel;
	QString m_yzRotationLabel;
	QString m_xzRotationLabel;
	QString m_zxRotationLabel;
};

#endif /* TRACKERHELIOSTAT_H_ */
