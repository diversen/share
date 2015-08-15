<?php

namespace modules\share;

use diversen\conf;
use diversen\view;

class module {
    /**
     * automatic subModulePostContent when module is enabled as sub module
     * in your share template all values should be rawurlencoded
     * @param array $options ('return_url' => 'http://return.com', 
     *                        'entity' => array ('title' => 'title', 'abstract' => 'abstract')
     *                       ); 
     * 
     * 
     * 
     * @return strin $share string
     */
    public static function subModulePostContent($options) {
        if ($options['mode'] != 'view') {
            return;
        }
        
        $template = conf::getModuleIni('share_template');
        $str = view::get('share', $template, $options);        
        return $str;
    }
    
    /**
     * get a template for share. 
     * in your share template all values should be rawurlencoded
     * @param array $options ('return_url' => 'http://return.com', 
     *                        'entity' => array ('title' => 'title', 'abstract' => 'abstract')
     *                       ); 
     * @return string $str
     */
    public static function get ($template, $options) {
        $str = view::get('share', $template, $options);
        return $str;
    }  
}
