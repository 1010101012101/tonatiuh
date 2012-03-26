TEMPLATE = subdirs


SUBDIRS =  ComponentHeliostatField \
			MaterialBasicRefractive \
			MaterialStandardSpecular \
            MaterialStandardRoughSpecular \
			PhotonMapDefault \
			RandomMersenneTwister \
			RandomRngStream \
            ShapeBezierSurface \
			ShapeCone \
			ShapeCylinder \
			ShapeFlatDisk \
			ShapeFlatRectangle \
            ShapeFlatTriangle \
			ShapeHyperboloid \
			ShapeParabolicDish \
			ShapeParabolicRectangle \
			ShapeSphere \
			ShapeSphericalPolygon \
            ShapeSphericalRectangle \
            ShapeTroughAsymmetricCPC \
			ShapeTroughCHC \
            ShapeTroughCPC \
            ShapeTroughHyperbola \
            ShapeTroughParabola \
            ShapeTrumpet \
            SunshapeBuie \
			SunshapePillbox \
			TrackerHeliostat \
            TrackerLinearFresnel \
			TrackerOneAxis \
            TransmissivityMirval \
            TransmissivityNREL \
			TransmissivityBallestrin \
            TransmissivityDefault

plugins.target= plugins
plugins.depends = src

QMAKE_EXTRA_TARGETS += plugins