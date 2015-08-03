<?php

use diversen\conf;

$share_url = conf::getModuleIni('share_facebook_likebox_url');
if (!$share_url) {
    $share_url = 'https://www.facebook.com/pages/coscmsorg/200609723314776';
}

urlencode($share_url); 

?>
<div class ="block">
<iframe src="//www.facebook.com/plugins/likebox.php?href=<?=$share_url?>&amp;width=292&amp;colorscheme=light&amp;show_faces=false&amp;border_color&amp;stream=false&amp;header=false&amp;height=62" scrolling="no" frameborder="0" style="border:none; overflow:hidden; width:292px; height:62px;" allowTransparency="true"></iframe>
</div>