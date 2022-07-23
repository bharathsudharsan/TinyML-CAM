#ifndef UUID5828661360
#define UUID5828661360

/**
  * RandomForestClassifier(base_estimator=DecisionTreeClassifier(), bootstrap=True, ccp_alpha=0.0, class_name=RandomForestClassifier, class_weight=None, criterion=gini, estimator_params=('criterion', 'max_depth', 'min_samples_split', 'min_samples_leaf', 'min_weight_fraction_leaf', 'max_features', 'max_leaf_nodes', 'min_impurity_decrease', 'random_state', 'ccp_alpha'), max_depth=40, max_features=auto, max_leaf_nodes=None, max_samples=None, min_impurity_decrease=0.0, min_samples_leaf=1, min_samples_split=2, min_weight_fraction_leaf=0.0, n_estimators=10, n_jobs=None, num_outputs=4, oob_score=False, package_name=everywhereml.sklearn.ensemble, random_state=None, template_folder=everywhereml/sklearn/ensemble, verbose=0, warm_start=False)
 */
class RandomForestClassifier {
    public:

        /**
         * Predict class from features
         */
        int predict(float *x) {
            int predictedValue = 0;
            size_t startedAt = micros();

            
    uint16_t votes[4] = { 0 };
    uint8_t classIdx = 0;
    float classScore = 0;

    
        tree0(x, &classIdx, &classScore);
        votes[classIdx] += classScore;
    
        tree1(x, &classIdx, &classScore);
        votes[classIdx] += classScore;
    
        tree2(x, &classIdx, &classScore);
        votes[classIdx] += classScore;
    
        tree3(x, &classIdx, &classScore);
        votes[classIdx] += classScore;
    
        tree4(x, &classIdx, &classScore);
        votes[classIdx] += classScore;
    
        tree5(x, &classIdx, &classScore);
        votes[classIdx] += classScore;
    
        tree6(x, &classIdx, &classScore);
        votes[classIdx] += classScore;
    
        tree7(x, &classIdx, &classScore);
        votes[classIdx] += classScore;
    
        tree8(x, &classIdx, &classScore);
        votes[classIdx] += classScore;
    
        tree9(x, &classIdx, &classScore);
        votes[classIdx] += classScore;
    

    // return argmax of votes
uint8_t maxClassIdx = 0;
float maxVote = votes[0];

for (uint8_t i = 1; i < 4; i++) {
    if (votes[i] > maxVote) {
        maxClassIdx = i;
        maxVote = votes[i];
    }
}

predictedValue = maxClassIdx;


            latency = micros() - startedAt;

            return (lastPrediction = predictedValue);
        }


        

/**
 * Predict class label
 */
String predictLabel(float *x) {
    return getLabelOf(predict(x));
}

/**
 * Get label of last prediction
 */
String getLabel() {
    return getLabelOf(lastPrediction);
}

/**
 * Get label of given class
 */
String getLabelOf(int8_t idx) {
    switch (idx) {
        case -1:
            return "ERROR";
        
            case 0:
                return "empty";
        
            case 1:
                return "pi";
        
            case 2:
                return "portenta";
        
            case 3:
                return "wio";
        
        default:
            return "UNKNOWN";
    }
}


        /**
 * Get latency in micros
 */
uint32_t latencyInMicros() {
    return latency;
}

/**
 * Get latency in millis
 */
uint16_t latencyInMillis() {
    return latency / 1000;
}

    protected:
        float latency = 0;
        int lastPrediction = 0;

        

    
        
            /**
             * Random forest's tree #0
             */
            void tree0(float *x, uint8_t *classIdx, float *classScore) {
                
    if (x[18] <= 0.0369415208697319) {
        
            
    if (x[78] <= 0.1300949603319168) {
        
            
    if (x[90] <= 0.02731012087315321) {
        
            
    if (x[63] <= 0.8730830252170563) {
        
            
    if (x[113] <= 0.26372766494750977) {
        
            
    if (x[98] <= 0.022605867125093937) {
        
            
    if (x[34] <= 0.2811869978904724) {
        
            
    if (x[55] <= 0.07885900512337685) {
        
            
    if (x[92] <= 0.3012963682413101) {
        
            
    *classIdx = 2;
    *classScore = 508.0;
    return;

        
    }
    else {
        
            
    if (x[134] <= 0.28155651688575745) {
        
            
    *classIdx = 1;
    *classScore = 466.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 508.0;
    return;

        
    }

        
    }

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 466.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[78] <= 0.02770218253135681) {
        
            
    *classIdx = 1;
    *classScore = 466.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 508.0;
    return;

        
    }

        
    }

        
    }
    else {
        
            
    if (x[116] <= 0.00469584483653307) {
        
            
    *classIdx = 1;
    *classScore = 466.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 508.0;
    return;

        
    }

        
    }

        
    }
    else {
        
            
    if (x[106] <= 0.11038459464907646) {
        
            
    *classIdx = 2;
    *classScore = 508.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 466.0;
    return;

        
    }

        
    }

        
    }
    else {
        
            
    *classIdx = 3;
    *classScore = 523.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[114] <= 0.0355784073472023) {
        
            
    if (x[99] <= 0.0847080098465085) {
        
            
    *classIdx = 3;
    *classScore = 523.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 508.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[63] <= 0.5556537806987762) {
        
            
    if (x[112] <= 0.3595939725637436) {
        
            
    *classIdx = 1;
    *classScore = 466.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 508.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 466.0;
    return;

        
    }

        
    }

        
    }

        
    }
    else {
        
            
    if (x[48] <= 0.05262908060103655) {
        
            
    *classIdx = 0;
    *classScore = 481.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 466.0;
    return;

        
    }

        
    }

        
    }
    else {
        
            
    if (x[112] <= 0.38147011026740074) {
        
            
    *classIdx = 3;
    *classScore = 523.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 508.0;
    return;

        
    }

        
    }

            }
        
    
        
            /**
             * Random forest's tree #1
             */
            void tree1(float *x, uint8_t *classIdx, float *classScore) {
                
    if (x[66] <= 0.03470461815595627) {
        
            
    if (x[92] <= 0.4885159134864807) {
        
            
    *classIdx = 3;
    *classScore = 506.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 518.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[54] <= 0.2060672491788864) {
        
            
    if (x[92] <= 0.600633054971695) {
        
            
    if (x[79] <= 0.23793259263038635) {
        
            
    if (x[56] <= 0.20621951669454575) {
        
            
    if (x[59] <= 0.07552803680300713) {
        
            
    if (x[79] <= 0.157677061855793) {
        
            
    *classIdx = 3;
    *classScore = 506.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 466.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[113] <= 0.07983606681227684) {
        
            
    if (x[53] <= 0.543332826346159) {
        
            
    *classIdx = 1;
    *classScore = 466.0;
    return;

        
    }
    else {
        
            
    *classIdx = 3;
    *classScore = 506.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[63] <= 0.2800687700510025) {
        
            
    if (x[93] <= 0.05621062591671944) {
        
            
    if (x[42] <= 0.08418368548154831) {
        
            
    *classIdx = 2;
    *classScore = 518.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 466.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 518.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[123] <= 0.09437189996242523) {
        
            
    *classIdx = 2;
    *classScore = 518.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 466.0;
    return;

        
    }

        
    }

        
    }

        
    }

        
    }
    else {
        
            
    if (x[98] <= 0.005484993336722255) {
        
            
    *classIdx = 1;
    *classScore = 466.0;
    return;

        
    }
    else {
        
            
    if (x[2] <= 0.08067275956273079) {
        
            
    *classIdx = 2;
    *classScore = 518.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 466.0;
    return;

        
    }

        
    }

        
    }

        
    }
    else {
        
            
    if (x[80] <= 0.3647053986787796) {
        
            
    *classIdx = 2;
    *classScore = 518.0;
    return;

        
    }
    else {
        
            
    if (x[20] <= 0.5538146793842316) {
        
            
    if (x[49] <= 0.05982496030628681) {
        
            
    if (x[56] <= 0.2696080878376961) {
        
            
    *classIdx = 2;
    *classScore = 518.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 466.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[70] <= 0.11429519951343536) {
        
            
    if (x[114] <= 0.16653749346733093) {
        
            
    *classIdx = 1;
    *classScore = 466.0;
    return;

        
    }
    else {
        
            
    if (x[123] <= 0.032165540382266045) {
        
            
    if (x[103] <= 0.4637199342250824) {
        
            
    *classIdx = 2;
    *classScore = 518.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 466.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 466.0;
    return;

        
    }

        
    }

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 518.0;
    return;

        
    }

        
    }

        
    }
    else {
        
            
    if (x[2] <= 0.04892366752028465) {
        
            
    *classIdx = 2;
    *classScore = 518.0;
    return;

        
    }
    else {
        
            
    if (x[6] <= 0.018453402444720268) {
        
            
    *classIdx = 1;
    *classScore = 466.0;
    return;

        
    }
    else {
        
            
    if (x[116] <= 0.09328529983758926) {
        
            
    *classIdx = 1;
    *classScore = 466.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 518.0;
    return;

        
    }

        
    }

        
    }

        
    }

        
    }

        
    }

        
    }
    else {
        
            
    if (x[59] <= 0.09137589856982231) {
        
            
    *classIdx = 1;
    *classScore = 466.0;
    return;

        
    }
    else {
        
            
    if (x[61] <= 0.19741814583539963) {
        
            
    if (x[79] <= 0.38941070437431335) {
        
            
    *classIdx = 2;
    *classScore = 518.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 466.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 466.0;
    return;

        
    }

        
    }

        
    }

        
    }
    else {
        
            
    if (x[65] <= 0.36613909900188446) {
        
            
    if (x[67] <= 0.7522072196006775) {
        
            
    *classIdx = 2;
    *classScore = 518.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 466.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 0;
    *classScore = 488.0;
    return;

        
    }

        
    }

        
    }

            }
        
    
        
            /**
             * Random forest's tree #2
             */
            void tree2(float *x, uint8_t *classIdx, float *classScore) {
                
    if (x[133] <= 0.45472584664821625) {
        
            
    if (x[57] <= 0.30642061680555344) {
        
            
    *classIdx = 3;
    *classScore = 459.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 511.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[94] <= 0.013848140370100737) {
        
            
    if (x[80] <= 0.9212180376052856) {
        
            
    if (x[116] <= 0.09623592719435692) {
        
            
    if (x[55] <= 0.05950098857283592) {
        
            
    *classIdx = 2;
    *classScore = 511.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 560.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 511.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 0;
    *classScore = 448.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[103] <= 0.10040346160531044) {
        
            
    if (x[122] <= 0.02093493938446045) {
        
            
    if (x[67] <= 0.5244172215461731) {
        
            
    if (x[23] <= 0.3314560502767563) {
        
            
    *classIdx = 3;
    *classScore = 459.0;
    return;

        
    }
    else {
        
            
    if (x[45] <= 0.210725799202919) {
        
            
    *classIdx = 2;
    *classScore = 511.0;
    return;

        
    }
    else {
        
            
    *classIdx = 0;
    *classScore = 448.0;
    return;

        
    }

        
    }

        
    }
    else {
        
            
    if (x[116] <= 0.09688782319426537) {
        
            
    if (x[99] <= 0.15070531517267227) {
        
            
    *classIdx = 1;
    *classScore = 560.0;
    return;

        
    }
    else {
        
            
    if (x[104] <= 0.004858243744820356) {
        
            
    *classIdx = 1;
    *classScore = 560.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 511.0;
    return;

        
    }

        
    }

        
    }
    else {
        
            
    if (x[107] <= 0.043371833860874176) {
        
            
    *classIdx = 2;
    *classScore = 511.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 560.0;
    return;

        
    }

        
    }

        
    }

        
    }
    else {
        
            
    if (x[90] <= 0.02459509950131178) {
        
            
    if (x[133] <= 0.8430708050727844) {
        
            
    if (x[35] <= 0.0420481413602829) {
        
            
    *classIdx = 1;
    *classScore = 560.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 511.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 511.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 511.0;
    return;

        
    }

        
    }

        
    }
    else {
        
            
    if (x[109] <= 0.18476517498493195) {
        
            
    if (x[56] <= 0.2247144728899002) {
        
            
    if (x[116] <= 0.0034325255546718836) {
        
            
    if (x[79] <= 0.15541844815015793) {
        
            
    *classIdx = 2;
    *classScore = 511.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 560.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[98] <= 0.000795243657194078) {
        
            
    if (x[33] <= 0.5699660181999207) {
        
            
    *classIdx = 1;
    *classScore = 560.0;
    return;

        
    }
    else {
        
            
    if (x[88] <= 0.20550961047410965) {
        
            
    *classIdx = 2;
    *classScore = 511.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 560.0;
    return;

        
    }

        
    }

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 511.0;
    return;

        
    }

        
    }

        
    }
    else {
        
            
    if (x[74] <= 0.0708680022507906) {
        
            
    if (x[116] <= 0.11245472729206085) {
        
            
    *classIdx = 1;
    *classScore = 560.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 511.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 511.0;
    return;

        
    }

        
    }

        
    }
    else {
        
            
    if (x[55] <= 0.056950220838189125) {
        
            
    *classIdx = 2;
    *classScore = 511.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 560.0;
    return;

        
    }

        
    }

        
    }

        
    }

        
    }

            }
        
    
        
            /**
             * Random forest's tree #3
             */
            void tree3(float *x, uint8_t *classIdx, float *classScore) {
                
    if (x[80] <= 0.9138846397399902) {
        
            
    if (x[102] <= 0.10483590140938759) {
        
            
    *classIdx = 3;
    *classScore = 487.0;
    return;

        
    }
    else {
        
            
    if (x[97] <= 0.01703598815947771) {
        
            
    if (x[75] <= 0.023341485299170017) {
        
            
    if (x[70] <= 0.1384853944182396) {
        
            
    if (x[101] <= 0.2657548785209656) {
        
            
    if (x[78] <= 0.00982948113232851) {
        
            
    *classIdx = 2;
    *classScore = 479.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 496.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[58] <= 0.9875586926937103) {
        
            
    *classIdx = 1;
    *classScore = 496.0;
    return;

        
    }
    else {
        
            
    if (x[22] <= 0.18773172795772552) {
        
            
    if (x[95] <= 0.019351176917552948) {
        
            
    if (x[11] <= 0.01873837038874626) {
        
            
    *classIdx = 1;
    *classScore = 496.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 479.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[110] <= 0.0485067144036293) {
        
            
    *classIdx = 2;
    *classScore = 479.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 496.0;
    return;

        
    }

        
    }

        
    }
    else {
        
            
    if (x[54] <= 0.033164238557219505) {
        
            
    if (x[80] <= 0.3718045800924301) {
        
            
    *classIdx = 2;
    *classScore = 479.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 496.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 496.0;
    return;

        
    }

        
    }

        
    }

        
    }

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 479.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[124] <= 0.9936124086380005) {
        
            
    if (x[73] <= 0.0703774020075798) {
        
            
    *classIdx = 1;
    *classScore = 496.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 479.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 496.0;
    return;

        
    }

        
    }

        
    }
    else {
        
            
    if (x[47] <= 0.12305829674005508) {
        
            
    if (x[90] <= 0.008263786789029837) {
        
            
    if (x[98] <= 0.009134478168562055) {
        
            
    if (x[96] <= 0.03772225510329008) {
        
            
    *classIdx = 1;
    *classScore = 496.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 479.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 479.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 479.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[64] <= 0.18797582015395164) {
        
            
    *classIdx = 2;
    *classScore = 479.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 496.0;
    return;

        
    }

        
    }

        
    }

        
    }

        
    }
    else {
        
            
    *classIdx = 0;
    *classScore = 516.0;
    return;

        
    }

            }
        
    
        
            /**
             * Random forest's tree #4
             */
            void tree4(float *x, uint8_t *classIdx, float *classScore) {
                
    if (x[65] <= 0.4568137377500534) {
        
            
    if (x[111] <= 0.04640892706811428) {
        
            
    *classIdx = 3;
    *classScore = 483.0;
    return;

        
    }
    else {
        
            
    if (x[92] <= 0.5991251170635223) {
        
            
    if (x[116] <= 0.08080089464783669) {
        
            
    if (x[46] <= 0.1407422199845314) {
        
            
    if (x[107] <= 0.10579070821404457) {
        
            
    if (x[79] <= 0.19204548746347427) {
        
            
    if (x[97] <= 0.03240184811875224) {
        
            
    *classIdx = 1;
    *classScore = 478.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 528.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[54] <= 0.015389987733215094) {
        
            
    if (x[90] <= 0.02292781602591276) {
        
            
    *classIdx = 1;
    *classScore = 478.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 528.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 478.0;
    return;

        
    }

        
    }

        
    }
    else {
        
            
    if (x[55] <= 0.10951834544539452) {
        
            
    *classIdx = 2;
    *classScore = 528.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 478.0;
    return;

        
    }

        
    }

        
    }
    else {
        
            
    if (x[90] <= 0.007291872752830386) {
        
            
    if (x[114] <= 0.05278712324798107) {
        
            
    if (x[5] <= 0.019473688676953316) {
        
            
    *classIdx = 2;
    *classScore = 528.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 478.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 478.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[61] <= 0.06436269357800484) {
        
            
    if (x[91] <= 0.004494044464081526) {
        
            
    *classIdx = 1;
    *classScore = 478.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 528.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 478.0;
    return;

        
    }

        
    }

        
    }

        
    }
    else {
        
            
    if (x[55] <= 0.08292442187666893) {
        
            
    *classIdx = 2;
    *classScore = 528.0;
    return;

        
    }
    else {
        
            
    if (x[67] <= 0.795905202627182) {
        
            
    *classIdx = 2;
    *classScore = 528.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 478.0;
    return;

        
    }

        
    }

        
    }

        
    }
    else {
        
            
    if (x[80] <= 0.5234813690185547) {
        
            
    if (x[21] <= 0.049780791625380516) {
        
            
    if (x[46] <= 0.15785471722483635) {
        
            
    *classIdx = 2;
    *classScore = 528.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 478.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[116] <= 0.06707945093512535) {
        
            
    *classIdx = 1;
    *classScore = 478.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 528.0;
    return;

        
    }

        
    }

        
    }
    else {
        
            
    if (x[117] <= 0.07842132449150085) {
        
            
    *classIdx = 1;
    *classScore = 478.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 528.0;
    return;

        
    }

        
    }

        
    }

        
    }

        
    }
    else {
        
            
    *classIdx = 0;
    *classScore = 489.0;
    return;

        
    }

            }
        
    
        
            /**
             * Random forest's tree #5
             */
            void tree5(float *x, uint8_t *classIdx, float *classScore) {
                
    if (x[101] <= 0.052058856934309006) {
        
            
    if (x[108] <= 0.5930112600326538) {
        
            
    if (x[80] <= 0.48694971203804016) {
        
            
    *classIdx = 2;
    *classScore = 508.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 506.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 3;
    *classScore = 478.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[78] <= 0.12165448069572449) {
        
            
    if (x[64] <= 0.13614977896213531) {
        
            
    if (x[116] <= 0.0720963291823864) {
        
            
    if (x[125] <= 0.006470485590398312) {
        
            
    if (x[102] <= 0.5091452896595001) {
        
            
    *classIdx = 1;
    *classScore = 506.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 508.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[133] <= 0.8621841073036194) {
        
            
    if (x[107] <= 0.10208133608102798) {
        
            
    *classIdx = 1;
    *classScore = 506.0;
    return;

        
    }
    else {
        
            
    if (x[65] <= 0.16045310348272324) {
        
            
    *classIdx = 2;
    *classScore = 508.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 506.0;
    return;

        
    }

        
    }

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 508.0;
    return;

        
    }

        
    }

        
    }
    else {
        
            
    if (x[108] <= 0.20820708572864532) {
        
            
    if (x[10] <= 0.01630954770371318) {
        
            
    if (x[47] <= 0.1604420617222786) {
        
            
    *classIdx = 2;
    *classScore = 508.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 506.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 506.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[98] <= 0.01953808404505253) {
        
            
    *classIdx = 1;
    *classScore = 506.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 508.0;
    return;

        
    }

        
    }

        
    }

        
    }
    else {
        
            
    if (x[55] <= 0.06958340853452682) {
        
            
    if (x[111] <= 0.8284404277801514) {
        
            
    if (x[95] <= 0.3986862450838089) {
        
            
    if (x[94] <= 0.01923585683107376) {
        
            
    if (x[102] <= 0.967304915189743) {
        
            
    *classIdx = 2;
    *classScore = 508.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 506.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 508.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 506.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 506.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[54] <= 0.4388955533504486) {
        
            
    if (x[75] <= 0.01729480642825365) {
        
            
    if (x[116] <= 0.13019520416855812) {
        
            
    *classIdx = 1;
    *classScore = 506.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 508.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[67] <= 0.38635003566741943) {
        
            
    *classIdx = 2;
    *classScore = 508.0;
    return;

        
    }
    else {
        
            
    if (x[68] <= 0.3347695767879486) {
        
            
    *classIdx = 1;
    *classScore = 506.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 508.0;
    return;

        
    }

        
    }

        
    }

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 508.0;
    return;

        
    }

        
    }

        
    }

        
    }
    else {
        
            
    if (x[44] <= 0.9923345446586609) {
        
            
    if (x[103] <= 0.1337764412164688) {
        
            
    *classIdx = 1;
    *classScore = 506.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 508.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[96] <= 0.0030480041168630123) {
        
            
    *classIdx = 0;
    *classScore = 486.0;
    return;

        
    }
    else {
        
            
    if (x[103] <= 0.19916509091854095) {
        
            
    *classIdx = 1;
    *classScore = 506.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 508.0;
    return;

        
    }

        
    }

        
    }

        
    }

        
    }

            }
        
    
        
            /**
             * Random forest's tree #6
             */
            void tree6(float *x, uint8_t *classIdx, float *classScore) {
                
    if (x[102] <= 0.11687179654836655) {
        
            
    if (x[64] <= 0.17842888087034225) {
        
            
    *classIdx = 3;
    *classScore = 471.0;
    return;

        
    }
    else {
        
            
    if (x[61] <= 0.037651170045137405) {
        
            
    *classIdx = 0;
    *classScore = 456.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 555.0;
    return;

        
    }

        
    }

        
    }
    else {
        
            
    if (x[70] <= 0.06084801256656647) {
        
            
    if (x[116] <= 0.07822248339653015) {
        
            
    if (x[49] <= 0.38092613220214844) {
        
            
    if (x[120] <= 0.013017720077186823) {
        
            
    if (x[46] <= 0.15880535542964935) {
        
            
    if (x[103] <= 0.6758613288402557) {
        
            
    if (x[97] <= 0.028888202272355556) {
        
            
    *classIdx = 1;
    *classScore = 555.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 496.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 496.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 496.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[59] <= 0.06674952432513237) {
        
            
    *classIdx = 1;
    *classScore = 555.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 496.0;
    return;

        
    }

        
    }

        
    }
    else {
        
            
    if (x[101] <= 0.16203821450471878) {
        
            
    *classIdx = 2;
    *classScore = 496.0;
    return;

        
    }
    else {
        
            
    if (x[117] <= 0.29609745740890503) {
        
            
    *classIdx = 1;
    *classScore = 555.0;
    return;

        
    }
    else {
        
            
    if (x[63] <= 0.011694431537762284) {
        
            
    *classIdx = 2;
    *classScore = 496.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 555.0;
    return;

        
    }

        
    }

        
    }

        
    }

        
    }
    else {
        
            
    if (x[98] <= 0.008444164413958788) {
        
            
    if (x[55] <= 0.08139839395880699) {
        
            
    if (x[46] <= 0.06833056174218655) {
        
            
    *classIdx = 1;
    *classScore = 555.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 496.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 555.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 496.0;
    return;

        
    }

        
    }

        
    }
    else {
        
            
    if (x[71] <= 0.01715219486504793) {
        
            
    if (x[71] <= 0.007186424918472767) {
        
            
    *classIdx = 1;
    *classScore = 555.0;
    return;

        
    }
    else {
        
            
    if (x[54] <= 0.023847054690122604) {
        
            
    *classIdx = 1;
    *classScore = 555.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 496.0;
    return;

        
    }

        
    }

        
    }
    else {
        
            
    if (x[102] <= 0.18921969085931778) {
        
            
    *classIdx = 1;
    *classScore = 555.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 496.0;
    return;

        
    }

        
    }

        
    }

        
    }

            }
        
    
        
            /**
             * Random forest's tree #7
             */
            void tree7(float *x, uint8_t *classIdx, float *classScore) {
                
    if (x[114] <= 0.03222952038049698) {
        
            
    if (x[64] <= 0.17848213016986847) {
        
            
    if (x[103] <= 0.20130645111203194) {
        
            
    *classIdx = 3;
    *classScore = 479.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 514.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 0;
    *classScore = 504.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[98] <= 0.011821059044450521) {
        
            
    if (x[80] <= 0.35860520601272583) {
        
            
    *classIdx = 2;
    *classScore = 514.0;
    return;

        
    }
    else {
        
            
    if (x[67] <= 0.3444618433713913) {
        
            
    *classIdx = 2;
    *classScore = 514.0;
    return;

        
    }
    else {
        
            
    if (x[101] <= 0.4114457815885544) {
        
            
    if (x[43] <= 0.07745068892836571) {
        
            
    *classIdx = 2;
    *classScore = 514.0;
    return;

        
    }
    else {
        
            
    if (x[59] <= 0.19998691976070404) {
        
            
    if (x[42] <= 0.09131728485226631) {
        
            
    if (x[7] <= 0.07340359315276146) {
        
            
    if (x[104] <= 0.05308664217591286) {
        
            
    *classIdx = 1;
    *classScore = 481.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 514.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 481.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 514.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 514.0;
    return;

        
    }

        
    }

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 481.0;
    return;

        
    }

        
    }

        
    }

        
    }
    else {
        
            
    if (x[56] <= 0.41088466346263885) {
        
            
    if (x[47] <= 0.14968156814575195) {
        
            
    if (x[7] <= 0.2603675201535225) {
        
            
    if (x[99] <= 0.004318844527006149) {
        
            
    if (x[41] <= 0.019454671069979668) {
        
            
    *classIdx = 2;
    *classScore = 514.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 481.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[21] <= 0.1030389778316021) {
        
            
    *classIdx = 2;
    *classScore = 514.0;
    return;

        
    }
    else {
        
            
    if (x[111] <= 0.551390528678894) {
        
            
    *classIdx = 2;
    *classScore = 514.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 481.0;
    return;

        
    }

        
    }

        
    }

        
    }
    else {
        
            
    *classIdx = 3;
    *classScore = 479.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 481.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[125] <= 0.11612779647111893) {
        
            
    *classIdx = 1;
    *classScore = 481.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 514.0;
    return;

        
    }

        
    }

        
    }

        
    }

            }
        
    
        
            /**
             * Random forest's tree #8
             */
            void tree8(float *x, uint8_t *classIdx, float *classScore) {
                
    if (x[101] <= 0.05232098326086998) {
        
            
    if (x[108] <= 0.5930112600326538) {
        
            
    if (x[42] <= 0.05685785599052906) {
        
            
    *classIdx = 1;
    *classScore = 505.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 496.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 3;
    *classScore = 493.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[49] <= 0.008799195755273104) {
        
            
    if (x[67] <= 0.7265111804008484) {
        
            
    *classIdx = 0;
    *classScore = 484.0;
    return;

        
    }
    else {
        
            
    if (x[78] <= 0.018843566067516804) {
        
            
    *classIdx = 2;
    *classScore = 496.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 505.0;
    return;

        
    }

        
    }

        
    }
    else {
        
            
    if (x[92] <= 0.5997764766216278) {
        
            
    if (x[80] <= 0.37235601246356964) {
        
            
    if (x[57] <= 0.014879327500239015) {
        
            
    *classIdx = 3;
    *classScore = 493.0;
    return;

        
    }
    else {
        
            
    if (x[107] <= 0.004320872016251087) {
        
            
    if (x[114] <= 0.0745684988796711) {
        
            
    *classIdx = 1;
    *classScore = 505.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 496.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 496.0;
    return;

        
    }

        
    }

        
    }
    else {
        
            
    if (x[98] <= 0.022634425200521946) {
        
            
    if (x[68] <= 0.10072548314929008) {
        
            
    *classIdx = 1;
    *classScore = 505.0;
    return;

        
    }
    else {
        
            
    if (x[49] <= 0.24995308369398117) {
        
            
    *classIdx = 2;
    *classScore = 496.0;
    return;

        
    }
    else {
        
            
    if (x[43] <= 0.25109250098466873) {
        
            
    *classIdx = 1;
    *classScore = 505.0;
    return;

        
    }
    else {
        
            
    if (x[111] <= 0.30603039264678955) {
        
            
    *classIdx = 2;
    *classScore = 496.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 505.0;
    return;

        
    }

        
    }

        
    }

        
    }

        
    }
    else {
        
            
    if (x[94] <= 0.30125169456005096) {
        
            
    *classIdx = 2;
    *classScore = 496.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 505.0;
    return;

        
    }

        
    }

        
    }

        
    }
    else {
        
            
    if (x[90] <= 0.011206488590687513) {
        
            
    if (x[88] <= 0.07520439848303795) {
        
            
    *classIdx = 2;
    *classScore = 496.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 505.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[45] <= 0.09221789240837097) {
        
            
    if (x[60] <= 0.40736718475818634) {
        
            
    if (x[61] <= 0.2641521543264389) {
        
            
    if (x[80] <= 0.5720258057117462) {
        
            
    if (x[47] <= 0.21448105573654175) {
        
            
    *classIdx = 2;
    *classScore = 496.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 505.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 505.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 505.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[65] <= 0.2080097794532776) {
        
            
    *classIdx = 2;
    *classScore = 496.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 505.0;
    return;

        
    }

        
    }

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 505.0;
    return;

        
    }

        
    }

        
    }

        
    }

        
    }

            }
        
    
        
            /**
             * Random forest's tree #9
             */
            void tree9(float *x, uint8_t *classIdx, float *classScore) {
                
    if (x[112] <= 0.0743429847061634) {
        
            
    *classIdx = 3;
    *classScore = 467.0;
    return;

        
    }
    else {
        
            
    if (x[110] <= 0.28466828167438507) {
        
            
    if (x[116] <= 0.08032038062810898) {
        
            
    if (x[93] <= 0.11881325766444206) {
        
            
    if (x[92] <= 0.9340429902076721) {
        
            
    if (x[110] <= 0.00503910006955266) {
        
            
    if (x[15] <= 0.025954012759029865) {
        
            
    *classIdx = 2;
    *classScore = 513.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 505.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 505.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 513.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[98] <= 0.017721661366522312) {
        
            
    if (x[56] <= 0.1771697998046875) {
        
            
    if (x[72] <= 0.01185616571456194) {
        
            
    *classIdx = 2;
    *classScore = 513.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 505.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 505.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[58] <= 0.15649032592773438) {
        
            
    *classIdx = 1;
    *classScore = 505.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 513.0;
    return;

        
    }

        
    }

        
    }

        
    }
    else {
        
            
    if (x[58] <= 0.34245556592941284) {
        
            
    *classIdx = 1;
    *classScore = 505.0;
    return;

        
    }
    else {
        
            
    if (x[56] <= 0.2746366709470749) {
        
            
    if (x[114] <= 0.2599753737449646) {
        
            
    if (x[23] <= 0.7012089490890503) {
        
            
    if (x[94] <= 0.012615592684596777) {
        
            
    if (x[59] <= 0.19462940841913223) {
        
            
    if (x[43] <= 0.1349761039018631) {
        
            
    *classIdx = 1;
    *classScore = 505.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 513.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 513.0;
    return;

        
    }

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 513.0;
    return;

        
    }

        
    }
    else {
        
            
    if (x[64] <= 0.36634698510169983) {
        
            
    *classIdx = 2;
    *classScore = 513.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 505.0;
    return;

        
    }

        
    }

        
    }
    else {
        
            
    if (x[103] <= 0.06138048693537712) {
        
            
    *classIdx = 1;
    *classScore = 505.0;
    return;

        
    }
    else {
        
            
    *classIdx = 2;
    *classScore = 513.0;
    return;

        
    }

        
    }

        
    }
    else {
        
            
    if (x[124] <= 0.9182375073432922) {
        
            
    *classIdx = 2;
    *classScore = 513.0;
    return;

        
    }
    else {
        
            
    *classIdx = 1;
    *classScore = 505.0;
    return;

        
    }

        
    }

        
    }

        
    }

        
    }
    else {
        
            
    if (x[21] <= 0.03671480901539326) {
        
            
    *classIdx = 1;
    *classScore = 505.0;
    return;

        
    }
    else {
        
            
    *classIdx = 0;
    *classScore = 493.0;
    return;

        
    }

        
    }

        
    }

            }
        
    


};



static RandomForestClassifier classifier;


#endif