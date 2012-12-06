<?php

class share {
    public static function subModulePostContent($options) {
        $template = config::getModuleIni('share_template');
        $str = view::get('share', $template, $options);
        return $str;
    }
    
}

