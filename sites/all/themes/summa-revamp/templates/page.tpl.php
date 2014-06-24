<div id="page-wrapper">
    <!-- header -->
    <div id="header">
        <div class="section clearfix">
            <div class="top-sociamedia">
                <div class="top-elements">
                    <?php print render($page['socialmedia']); ?>
                </div>
            </div>

            <?php if ($logo): ?>
                <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo"><img
                        src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>"/></a>
            <?php endif; ?>

            <?php if ($site_name || $site_slogan): ?>
                <div id="name-and-slogan">
                    <?php if ($site_name): ?>
                        <?php if ($title): ?>
                            <div id="site-name"><strong>
                                    <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"
                                       rel="home"><span><?php print $site_name; ?></span></a>
                                </strong></div>
                        <?php else: /* Use h1 when the content title is empty */ ?>
                            <h1 id="site-name">
                                <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"
                                   rel="home"><span><?php print $site_name; ?></span></a>
                            </h1>
                        <?php endif; ?>
                    <?php endif; ?>

                    <?php if ($site_slogan): ?>
                        <div id="site-slogan"><?php print $site_slogan; ?></div>
                    <?php endif; ?>
                </div> <!-- /#name-and-slogan -->
            <?php endif; ?>

            <?php print render($page['header']); ?>

        </div>
    </div>
    <!-- /.section, /#header -->
    <div id="page">
        <div id="main-wrapper">
            <div id="main" class="clearfix<?php if ($main_menu || $page['navigation']) {
                print ' with-navigation';
            } ?>">

                <div id="content" class="column">
                    <div class="section">
                        <?php print render($page['highlight']); ?>
                        <?php print $breadcrumb; ?>
                        <a id="main-content"></a>
                        <?php print render($title_prefix); ?>
                        <?php if ($title): ?>
                            <h1 class="title" id="page-title"><?php print $title; ?></h1>
                        <?php endif; ?>
                        <?php print render($title_suffix); ?>
                        <?php print $messages; ?>
                        <?php if ($tabs): ?>
                            <div class="tabs"><?php print render($tabs); ?></div>
                        <?php endif; ?>
                        <?php print render($page['help']); ?>
                        <?php if ($action_links): ?>
                            <ul class="action-links"><?php print render($action_links); ?></ul>
                        <?php endif; ?>
                        <?php print render($page['content']); ?>
                        <?php print $feed_icons; ?>
                    </div>
                </div>
                <!-- /.section, /#content -->

                <?php if ($page['navigation'] || $main_menu): ?>
                    <div id="navigation">
                        <div class="section clearfix">

                            <?php print theme('links__system_main_menu', array(
                                'links' => $main_menu,
                                'attributes' => array(
                                    'id' => 'main-menu',
                                    'class' => array('links', 'clearfix'),
                                ),
                                'heading' => array(
                                    'text' => t('Main menu'),
                                    'level' => 'h2',
                                    'class' => array('element-invisible'),
                                ),
                            )); ?>

                            <?php print render($page['navigation']); ?>

                        </div>
                    </div> <!-- /.section, /#navigation -->
                <?php endif; ?>

                <?php print render($page['sidebar_first']); ?>

                <?php print render($page['sidebar_second']); ?>

            </div>
        </div>
        <!-- /#main, /#main-wrapper -->


    </div>

    <?php if ($page['footer'] || $secondary_menu): ?>
        <div id="footer">
            <div class="section">

                <?php print theme('links__system_secondary_menu', array(
                    'links' => $secondary_menu,
                    'attributes' => array(
                        'id' => 'secondary-menu',
                        'class' => array('links', 'clearfix'),
                    ),
                    'heading' => array(
                        'text' => t('Secondary menu'),
                        'level' => 'h2',
                        'class' => array('element-invisible'),
                    ),
                )); ?>

                <?php print render($page['footer']); ?>

            </div>
        </div> <!-- /.section, /#footer -->
    <?php endif; ?>

</div> <!-- /#page, /#page-wrapper -->

<?php print render($page['bottom']); ?>
