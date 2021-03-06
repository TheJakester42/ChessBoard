#declare queen = merge {
        merge {
                 difference {
                        difference {
                                sphere { <0,0,0>,1 }
                                box { <-1,-1,-1>,<1,0.55,1> }
                        }
                        difference {
                                sphere { <0,0,0>,1 }
                                box { <-1,-1,-1>,<1,0.15,1> }
                                rotate 180*x
                                translate <0,1.25,0>
                        }
                        scale 0.9
                        translate <0,-0.5,0>
                }
                cone { <0,0,0>,0.72, <0,0.04,0>,0.72 translate <0,0,0> }
                lathe{
                        quadratic_spline
                        4,
                        <0.75,2.25>,
                        <0.5,1.5>,
                        <0.5,0.75>,
                        <0.75,0>
                        scale <1,0.6,1>
                        rotate 180*x
                }                   
                scale 1.3
                translate <0,5.15,0>
        }
        merge {
                difference {
                        sphere { <0,0,0>,1 }
                        box { <-1,-1,-1>,<1,0.55,1> }
                }
                sphere { <0,0,0>,0.2 scale <1,0.7,1> translate <0,1.1,0>}
                translate <0,4.65,0>
        }
        
        torus { 0.63,0.05 scale 1 translate <0,3.95,0> }
        torus { 0.75,0.08 scale 1 translate <0,3.71,0> }
        torus { 0.85,0.15 scale 1 translate <0,3.5,0> } 
        cone { <0,0,0>,0.6, <0,0.65,0>,0.6 scale 1 translate <0,3.35,0> }
        lathe{
                quadratic_spline
                4,
                <0.75,2.25>,
                <0.5,1.5>,
                <0.5,0.75>,
                <0.75,0>
                scale <1.1,1.35,1.1>
                translate <0,1.4,0>
        }
        lathe{
                cubic_spline
                6,
                <0,1.25>,
                <0.6,1.15>,
                <0.65,0.85>,
                <1,0.5>,
                <1,0.15>,
                <0.25,0>
                scale <1.4,1.1,1.4>
                translate <0,0.15,0>
        }
        cone { <0,0.25,0>,1.45, <0,0.3,0>,1.45 scale 1 rotate 0 translate <0,0,0> }
        cone { <0,0,0>,1.5, <0,0.25,0>,1.5 scale 1 rotate 0 translate <0,0,0> }
        scale <1,1.15,1>
}

#declare queen = object{queen scale 0.5}